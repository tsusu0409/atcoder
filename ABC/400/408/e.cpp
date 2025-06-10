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

    ll ans = 1e11;
    auto dfs = [&](auto dfs, int s, vector<bool> visited, ll score) -> void{
        visited[s] = 1;
        if(s == N-1){
            ans = min(ans, score);
            return;
        }
        else{
            for(auto [to, weight]: G[s]){
                if(visited[to]){
                    continue;
                }
                else{
                    dfs(dfs, to, visited, score|weight);
                }
            }
        }
    };

    dfs(dfs, 0, vector<bool>(N, 0), 0);

    cout << ans << endl;
}
