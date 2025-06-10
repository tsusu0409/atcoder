#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N, M; cin >> N >> M;
    vector<vector<pair<int, ll>>> G(N);
    rep(i, M){
        int u, v, w; cin >> u >> v >> w;
        u--; v--;
        G[u].push_back({v,w});
        G[v].push_back({u,w});
    }

    vector<ll> dp(N, 2e18);
    rep(i, N){
        if(i==0){
            dp[i] = 0;
            continue;
        }
        for(auto [path, weight]: G[i]){
            if(path>i) continue;
            dp[i] = min(dp[i], dp[path] | weight);
        }
    }
    cout << dp[N-1] << endl;
}
