#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N; cin >> N;
    vector<int> h(N);
    rep(i, N){
        cin >> h[i];
    }

    vector<int> dp(N, 1e9);
    dp[0] = 0;
    dp[1] = abs(h[1]-h[0]);
    for(int i = 2; i < N; i++){
        int cost1 = dp[i-1] + abs(h[i]-h[i-1]);
        int cost2 = dp[i-2] + abs(h[i]-h[i-2]);
        dp[i] = min(cost1, cost2);
    }

    cout << dp[N-1] << endl;
}
