#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N, M; cin >> N >> M;
    vector<vector<int>> g(N);
    rep(i, M){
        int a, b;
        cin >> a >> b;
        a--; b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    int ans = 0;
    
    auto dfs = [&](auto dfs, int s, vector<bool> visited) -> void{
        visited[s] = 1;
        int v = 0;
        for(auto i: visited){
            if(i == 1){
                v ++;
            }
        }
        if(v == N){
            ans ++;
        }
        else{
            bool check = 0;
            for(auto j: g[s]){
                if(visited[j] == 0){
                    check = 1;
                }
            }
            if(!check){
                return;
            }

            else{
                for(auto j: g[s]){
                    if(visited[j] == 1){
                        continue;
                    }
                    else{
                        dfs(dfs, j, visited);
                    }
                }
            }
        }
    };

    vector<bool> visited(N, 0);
    visited[0] = 1;
    dfs(dfs, 0, visited);

    cout << ans << endl;
}
