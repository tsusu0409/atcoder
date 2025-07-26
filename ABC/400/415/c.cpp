#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int T; cin >> T;
    rep(t, T){
        int N; cin >> N;
        string S; cin >> S;
        vector<bool> dp(1<<N, 0);
        dp[0] = 1;
        rep(i, 1<<N){
            if(i==0) continue;
            
            if(S[i-1]=='1') continue;
            rep(j, N){
                if(i & (1<<j)){
                    int pre = i ^ (1<<j);
                    if(dp[pre]){
                        dp[i] = 1;
                        break;
                    }
                }
            }
        }
        if(dp[(1<<N) - 1]) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}
