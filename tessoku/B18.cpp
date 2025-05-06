#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int A[69];
bool dp[69][10009];

int main() {
    int N, S; cin >> N >> S;
    for(int i=1; i<=N; i++) cin >> A[i];

    dp[0][0] = 1;
    for(int j=1; j<=S; j++) dp[0][j] = 0;

    for(int i=1; i<=N; i++){
        for(int j=0; j<=S; j++){
            if(j<A[i]) dp[i][j] = dp[i-1][j];
            if(j>=A[i]){
                if(dp[i-1][j] || dp[i-1][j-A[i]]) dp[i][j] = 1;
                else dp[i][j] = 0;
            }
        }
    }

    if(!dp[N][S]){
        cout << -1 << endl;
        return 0;
    }

    int place = S;
    vector<int> ans = {};
    for(int i=N; i>=1; i--){
        if(!dp[i-1][place]){
            ans.push_back(i);
            place -= A[i];
        }
    }

    reverse(ans.begin(), ans.end());

    cout << ans.size() << endl;
    rep(i, ans.size()){
        if(i) cout << ' ';
        cout << ans[i];
    }
    cout << endl;
}