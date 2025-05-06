#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N; cin >> N;
    vector<int> A(N+10);
    vector<int> B(N+10);
    vector<int> dp(N+10, 0);
    
    for(int i=2; i<=N; i++) cin >> A[i];
    for(int i=3; i<=N; i++) cin >> B[i];

    dp[2] = A[2];
    for(int i=3; i<=N; i++) dp[i] = min(dp[i-1]+A[i], dp[i-2]+B[i]);

    vector<int> ans = {};
    int place = N;
    while(1){
        ans.push_back(place);
        if(place==1) break;
        
        if(dp[place]==dp[place-1]+A[place]) place--;
        else place -= 2;
    }

    reverse(ans.begin(), ans.end());

    cout << ans.size() << endl;

    rep(i, ans.size()-1) cout << ans[i] << ' ';
    cout << ans[ans.size()-1] << endl;
}