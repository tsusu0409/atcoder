#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
    int T; cin >> T;
    rep(t, T){
        int N; cin >> N;
        vector<int> W(N);
        vector<int> P(N);
        rep(i, N) cin >> W[i] >> P[i];

        vector<pair<ll, int>> data(N);
        ll all_P = 0;
        rep(i, N){
            data[i].first = W[i] + P[i];
            data[i].second = P[i];
            all_P += P[i];
        }

        sort(data.begin(), data.end());

        int ans = 0;
        ll sum = 0;
        rep(i, N){
            sum += data[i].first;

            if(sum<=all_P){
                ans ++;
            }
            else{
                break;
            }
        }
        cout << ans << endl;
    }
}
