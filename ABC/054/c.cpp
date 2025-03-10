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
        g[a-1].push_back(b-1);
        g[b-1].push_back(a-1);
    }

    int ans = 0;
    int now = 0;
    queue<int> que;
    for(auto i: g[0]){
        que.push(g[0][i]);
    }
    while(!que.empty){

    }
    // わからんて
}
