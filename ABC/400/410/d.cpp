#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    bool can = 0;
    int N, M; cin >> N >> M;
    vector<vector<pair<int, ll>>> G(N);
    rep(i, M){
        int u, v; ll w;
        cin >> u >> v >> w;
        u--;
        v--;
        G[u].push_back({v, w});
        G[v].push_back({u, w});
    }

    ll ans = 2e18;
    auto dfs = [&](auto dfs, int s, vector<bool> visited, ll score) -> void{
        visited[s] = 1;
        if(s == N-1){
            ans = min(ans, score);
            can = 1;
            return;
        }
        else{
            for(auto [to, weight]: G[s]){
                if(visited[to]){
                    continue;
                }
                else{
                    dfs(dfs, to, visited, score^weight);
                }
            }
        }
    };

    dfs(dfs, 0, vector<bool>(N, 0), 0);

    if(!can)cout << -1 << endl;
    else cout << ans << endl;

}
