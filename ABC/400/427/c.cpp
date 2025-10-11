#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

vector<int> color;
int ans;
void dfs(const vector<vector<int>> &G, int s, int cur){
    color[s] = cur;
    for(auto next: G[s]){
        if(color[next]!=-1){
            if(color[next]==cur) ans++;
            continue;
        }

        dfs(G, next, 1-cur);
    }
}

int main() {
    int N, M; cin >> N >> M;
    vector<vector<int>> G(N);
    rep(i, M){
        int u, v; cin >> u >> v;
        u--; v--;
        G[u].push_back(v);
        G[v].push_back(u);
    }

    color.assign(N, -1);
    rep(i, N){
        if(color[i]==-1) dfs(G, i, 0);
    }

    cout << ans/2 << endl;
}
