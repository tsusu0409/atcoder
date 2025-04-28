#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N; cin >> N;
    vector<int> A(N);
    rep(i, N-1){
        cin >> A[i+1];
    }
    vector<int> B(N);
    rep(i, N-2){
        cin >> B[i+2];
    }

    vector<int> dp(N, 1e9);
    rep(i, N){
        if(i==0){
            dp[i] = 0;
        }
        else if(i==1){
            dp[i] = (dp[i-1] + A[i]);
        }
        else{
            dp[i] = min(dp[i-1] + A[i], dp[i-2] + B[i]);
        }
    }

    cout << dp[N-1] << endl;
}
