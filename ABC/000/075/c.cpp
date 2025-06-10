#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using P = pair<int,int>;

int main() {
    int N, M; cin >> N >> M;
    vector<P> input(M);
    rep(i, M){
        int a,b; cin >> a >> b;
        input[i] = {a, b};
    }

    int ans = 0;
    rep(i, M){
        vector<vector<int>> g(N);
        rep(j, M){
            if(i==j){
                continue;
            }
            int ap = input[j].first;
            int bp = input[j].second;
            ap--; bp--;
            g[ap].push_back(bp);
            g[bp].push_back(ap);
        }


        auto dfs = [&](auto dfs, vector<bool> &visited, int s) -> void {
            visited[s] = 1;
        
            for(auto i: g[s]){
                if(!visited[i]){
                    dfs(dfs, visited, i);
                }
            }
        };

        vector<bool> visited(N, 0);
        dfs(dfs, visited, 0);

        int count = 0;
        for(auto j: visited){
            if(j){
                count ++;
            }
        }
        if(count != N){
            ans ++;
        }
    }

    cout << ans << endl;
}
