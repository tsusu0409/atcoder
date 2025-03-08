#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

struct edge {
    int to;
    ll weight;
};

using Graph = vector<vector<edge>>;

int main() {
    int N, M; cin >> N >> M;
    Graph G(N);
    rep(i, M){
        int u, v; ll w;
        cin >> u >> v >> w;
        G[u].push_back(edge(v, w));
        G[v].push_back(edge(u, w));
    }

    vector<string> dist[G.size()];
    fill(dist, dist + G.size(), -1);
    dist[s] = 0;

    priority_queue<P, vector<P>, greater<P>> que;
    que.push({0, 0});

    while(!que.emplty()){
        P c = que.top();
        int d = c.first;
        int idx = c.second;
        que.pop();
        ll si = 0;
        int check = 1;
        rep(i, dist[idx].size()){
            si += check * dist[idx][j];
            check *= 2;
        }
        if(d > si){
            continue;
        }
        for(auto i: G[idx]){
            int to = G[idx][i].to;
            int weight = grapsh[idx][i].weight;
            bitset<60> bs(weight);
            vector<int> new(60);
            rep(j, 60){
                if(bs[i] == 0 && dist[to][i] == '0'){
                    new[i] = 0;
                }
                else if(bs[i] == 1 && dist[to][i] == '1'){
                    new[i] = 0;
                }
                else{
                    new[i] = 1;
                }
            }
            rep(j, 60){
                dist[to][i] == new[i];
            }
            que.push({dist[to], to});
        }
    }

    cout << dist[N-1] << endl;
}
