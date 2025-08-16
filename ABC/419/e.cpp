#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N, M, L;
    cin >> N >> M >> L;
    vector<int> A(N);
    rep(i,N) cin >> A[i];

    vector<vector<int>> cost(L, vector<int>(M, 1e9));
    rep(g, L) {
        vector<int> elems;
        for (int i=g; i<N; i+=L) elems.push_back(A[i]);

        rep(x, M) {
            int c = 0;
            for (int v : elems) {
                int add = (x - v + M) % M;
                c += add;
            }
            cost[g][x] = c;
        }
    }

    vector<int> dp(M, 1e9);
    dp[0] = 0;
    rep(g, L) {
        vector<int> ndp(M, 1e9);
        rep(mod, M) {
            if (dp[mod] >= 1e9) continue;
            rep(x, M) {
                int nMod = (mod + x) % M;
                ndp[nMod] = min(ndp[nMod], dp[mod] + cost[g][x]);
            }
        }
        dp = ndp;
    }

    cout << dp[0] << endl;
}
