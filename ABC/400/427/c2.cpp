#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N, M;
    cin >> N >> M;
    vector<vector<int>> G(N);
    rep(i, M){
        int u, v; cin >> u >> v;
        u--; v--;
        G[u].push_back(v);
        G[v].push_back(u);
    }

    int sum = 0;
    vector<int> color(N, -1);

    rep(s, N){
        if(color[s]!=-1) continue;

        queue<int> q;
        q.push(s);
        color[s] = 0;

        while(!q.empty()){
            int u = q.front();
            q.pop();
            for(int next: G[u]){
                if(color[next]==-1){
                    color[next] = 1-color[u];
                    q.push(next);
                }
                else{
                    if(color[next]==color[u]){
                        sum++;
                    }
                }
            }
        }
    }

    cout << sum/2 << endl;
}
