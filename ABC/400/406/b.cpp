#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N, K; cin >> N >> K;

    ll limit = 10;
    rep(i, K-1){
        limit *= 10;
    }
    limit --;

    ll ans = 1;
    vector<ll> A(N);
    rep(i, N){
        cin >> A[i];
        if(ans > limit / A[i]){
            ans = 1;
        }
        else{
            ans *= A[i];
        }
    }

    cout << ans << endl;
}
