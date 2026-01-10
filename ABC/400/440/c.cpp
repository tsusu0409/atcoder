#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int T; cin >> T;
    rep(t, T){
        int N, W; cin >> N >> W;
        vector<ll> C(N);
        rep(i, N) cin >> C[i];

        vector<ll> cost(2*W, 0);
        rep(i, N){
            ll pos = (i + 1) % (2 * W);
            cost[pos] += C[i];
        }

        ll cur = 0;
        rep(i, W){
            cur += cost[i];
        }

        ll ans = cur;
        for(int i = W; i < (2 * W) + W; i++){
            cur += cost[i % (2 * W)];
            cur -= cost[(i - W) % (2 * W)];
            ans = min(cur, ans);
        }

        cout << ans << endl;
    }
}
