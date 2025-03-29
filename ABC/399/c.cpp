#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

vector<bool> visited;
void dfs(const vector<vector<int>> &G, int s){
    visited[s] = 1;
    for(auto i: G[s]){
        if(!visited[i]){
            dfs(G, i);
        }
    }
}

int main() {
    int N, M; cin >> N >> M;
    vector<vector<int>> G(N);
    rep(i, M){
        int u, v;
        cin >> u >> v;
        u--; v--;
        G[u].push_back(v);
        G[v].push_back(u);
    }

    int unit = 0;
    visited.assign(N, 0);

    rep(i, N){
        if(!visited[i]){
            dfs(G, i);
            unit ++;
        }
    }

    cout << M - N + unit << endl;
}
