#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
using P = pair<int,int>;

int main() {
    ll N; cin >> N;
    vector<ll> A(N);
    vector<ll> sum(N, 0);
    rep(i, N){
        cin >> A[i];
        if(i==0){
            sum[i] = A[i];
        }
        else{
            sum[i] = sum[i-1] + A[i];
        }
    }

    rep(k, N){
        ll ans = 0;
        rep(i, N-k+1){
            if(i==0){
                ans = sum[k];
            }
            else{
                ll tmp = sum[i+k] - sum[i-1];
                ans = max(ans, tmp);
            }
        }
        cout << ans << endl;
    }
}
