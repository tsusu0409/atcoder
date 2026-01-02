#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N, M; cin >> N >> M;
    string S, T; cin >> S >> T;

    int ans = 1e9;
    rep(i, N){
        if(i+M>N) break;
        int cnt = 0;
        rep(j, M){
            int a = S[i+j] - '0';
            int b = T[j] - '0';
            cnt += (a - b + 10) % 10;
        }
        ans = min(ans, cnt);
    }

    cout << ans << endl;
}
