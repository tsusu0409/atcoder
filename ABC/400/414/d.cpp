#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

const INF = 1e7;

int main() {
    int N, M; cin >> N >> M;
    vector<int> X(N);
    rep(i, N) cin >> X[i];

    sort(X.begin(), X.end());

    vector<vector<int>> dp(N+1, vector<int>(M, INF));

    dp[0][0] = 0;

    for(int i=1; i<=N; i++){
        for(int m=1; m<=M; m++){
            
        }
    }
}
