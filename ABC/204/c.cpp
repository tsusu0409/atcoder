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
        int A, B;
        cin >> A >> B;
        A--; B--;
        g[A].push_back(B);
    }

    int ans = 0;

    auto dfs = [&](auto dfs, int s, int p, vector<bool> visited) -> void {
        visited[s] = 1;
        int v = 0;
        for(auto i: g[s]){
            if(visited[i] == 1){
                v++;
            }
        }
        int size = g[s].size();
        if(size == 0 || size == v){
            return;
        }
        for(auto i: g[s]){
            if(visited[i] == 1){
                continue;
            }
            else if(i == p){
                ans ++;
            }
            else{
                dfs(dfs, i, p, visited);
            }
        }
    };

    
    rep(s, N){
        rep(p, N){
            if(s == p){
                ans ++;
            }
            else{
                vector<bool> visited(N, 0);
                visited[s] = 1;
                dfs(dfs, s, p, visited);
            }
        }
    }

    cout << ans << endl;
}
