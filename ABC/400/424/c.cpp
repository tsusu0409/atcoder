#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

void dfs(int skill, const vector<vector<int>> &G, vector<bool>& skilled){
    if(skilled[skill]) return;

    skilled[skill] = 1;

    for(int next: G[skill]){
        dfs(next, G, skilled);
    }
}

int main() {
    int N; cin >> N;
    vector<int> A(N);
    vector<int> B(N);
    rep(i, N) cin >> A[i] >> B[i];

    vector<bool> skilled(N, 0);
    vector<vector<int>> G(N);
    rep(i, N){
        if(A[i]==0 && B[i]==0) skilled[i] = 1;

        else{
            if(A[i]!=0) G[A[i]-1].push_back(i);
            if(B[i]!=0) G[B[i]-1].push_back(i);
        }
    }

    rep(i, N){
        if(skilled[i]) dfs(i, G, skilled);
    }

    int ans = 0;
    rep(i, N){
        if(skilled[i]) ans++;
    }

    cout << ans << endl;
}
