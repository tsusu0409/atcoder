#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N, S; cin >> N >> S;
    vector<int> A(N+10);
    for(int i=1; i<=N; i++) cin >> A[i];
    
    // 配列の宣言と初期化
    vector<vector<bool>> dp(N+10, vector<bool>(S+10));
    dp[0][0] = 1;
    for(int j=1; j<=N; j++) dp[0][j] = 0;

    // dp
    for(int i=1; i<=N; i++){
        rep(j, S+1){
            if(j<A[i]) dp[i][j] = dp[i-1][j];
            else if(dp[i-1][j] || dp[i-1][j-A[i]]) dp[i][j] = 1;
            else dp[i][j] = 0;
        }
    }

    if(dp[N][S]){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}