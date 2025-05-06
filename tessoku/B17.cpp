#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n; cin >> n;
    vector<int> h(n+10);
    for(int i=1; i<=n; i++) cin >> h[i];

    vector<int> dp(n+10, 0);
    dp[2] = abs(h[2] - h[1]);
    for(int i=3; i<=n; i++){
        dp[i] = min(dp[i-1]+abs(h[i]-h[i-1]), dp[i-2]+abs(h[i]-h[i-2]));
    }

    int place = n;
    vector<int> ans = {};
    while(1){
        ans.push_back(place);
        if(place==1) break;

        else if(dp[place] == dp[place-1]+abs(h[place]-h[place-1])) place--;
        else place -= 2;
    }

    reverse(ans.begin(), ans.end());

    cout << ans.size() << endl;
    rep(i, ans.size()-1){
        cout << ans[i] << ' ';
    }
    cout << ans[ans.size()-1] << endl;
}