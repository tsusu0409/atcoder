#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

ll dp[109][100009];

int main() {
    int N, W; cin >> N >> W;
    vector<ll> w(N+1);
    vector<ll> v(N+1);
    rep(i, N){
        cin >> w[i+1] >> v[i+1];
    }

    rep(i, N+1){
        rep(j, W+1){
            dp[i][j] = -1e15;
        }
    }
    dp[0][0] = 0;

    for(int i=1; i<=N; i++){
        for(int j=0; j<=W; j++){
            if(j<w[i]){
                dp[i][j] = dp[i-1][j];
            }
            else{
                dp[i][j] = max(dp[i-1][j], dp[i-1][j-w[i]]+v[i]);
            }
        }
    }

    ll ans = 0;
    rep(i, W+1){
        ans = max(ans, dp[N][i]);
    }
    cout << ans << endl;
}