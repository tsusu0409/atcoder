#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N; cin >> N;
    vector<ll> A(N);
    rep(i, N) cin >> A[i];

    ll ans = 0;
    ll preMax = 0;
    rep(i, N){
        if(preMax >= A[i]){
            ans += preMax - A[i];
        }

        preMax = max(preMax, A[i]);
    }

    cout << ans << endl;
}
