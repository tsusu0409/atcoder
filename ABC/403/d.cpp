#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

vector<bool> seen;
int dfs(const vector<vector<int> &G, int v){
    seen[v] = 1;
    int size = 1;
    for(auto next_v: G[v]){
        if(seen[next_v]){
            continue;
        }
        size += dfs(G, next_v);
    }
    return size;
}


int main() {
    int N, D; cin >> N >> D;
    set<int> A;
    rep(i, N){
        int a; cin >> a;
        a--;
        A.insert(a);
    }

    vector<vector<int>> G(1e6+1);
    for(auto i: A){
        if(A.count(i-D)){
            G[i].push_back(i-D);
        }
        if(A.count(i+D)){
            G[i].push_back(i+D);
        }
    }

    vector<int> sizeData = {};
    seen.assign(1e6+1, 0);
    rep(i, 1e6+1){
        if(!seen[i]){
            sizeData.push_back(dfs(G, i));
        }
    }

    int ans = 0;
    for(auto i: sizeData){
        int tmp = i / 2;
        ans += tmp;
    }

    cout << ans << endl;

}
