#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N; cin >> N;
    vector<int> X(N);
    rep(i, N) cin >> X[i];

    ll ans = 2e9;
    for(int i=1; i<=100; i++){
        ll now = 0;
        rep(j, N){
            now += (X[j] - i) * (X[j] - i);
        }

        ans = min(ans, now);
    }

    cout << ans << endl;
}
