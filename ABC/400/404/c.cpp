#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

vector<bool> visited;
void dfs(const vector<vector<int>> &G, int v){
    visited[v] = 1;
    for(auto i:G[v]){
        if(visited[i]) continue;
        dfs(G, i);
    }
}

int main() {
    int N, M; cin >> N >> M;
    vector<vector<int>> G(N);
    rep(i, M){
        int a, b; cin >> a >> b;
        a--; b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    visited.assign(N, 0);
    int s = 0;
    dfs(G, s);

    int ans = 1;
    if(N!=M){
        ans = 0;
    }
    rep(i, N){
        if(G[i].size() != 2){
            ans = 0;
        }
    }
    for(auto i: visited){
        if(!i) ans = 0;
    }

    if(ans){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}
