#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N; cin >> N;
    vector<ll> A(N);
    rep(i, N) cin >> A[i];
    ll X; cin >> X;
    
    ll sumA = 0;
    rep(i, N) sumA += A[i];

    ll ans = 0;
    ans += (X / sumA) * N;
    X %= sumA;

    rep(i, N){
        if(X>=0){
            X -= A[i];
            ans++;
        }
        else{
            break;
        }
    }

    cout << ans << endl;
}
