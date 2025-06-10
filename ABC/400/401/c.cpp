#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    ll N, K; cin >> N >> K;
    vector<ll> A(N+1, 0);
    vector<ll> sum(N+1, 0);

    A[0] = 1;
    sum[0] = 1;

    if(N>=K){
        rep(i, K){
            A[i] = 1;
            if(i!=0){
                sum[i] += sum[i-1] + A[i];
            }
            A[i] %= 1000000000;
            sum[i] %= 1000000000;
        }
        for(int i = K; i < N+1; i++){
            if(i-1-K == -1){
                A[i] = sum[i-1];
            }
            else{
                A[i] = sum[i-1] - sum[i-1-K];
            }
            sum[i] += sum[i-1] + A[i];

            A[i] %= 1000000000;
            sum[i] %= 1000000000;
        }

        while(A[N] < 0){
            A[N] += 1000000000;
        }
        ll ans = A[N] % 1000000000;
        cout << ans << endl;
    }
    else{
        cout << 1 << endl;
    }
}
