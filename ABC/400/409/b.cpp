#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N; cin >> N;
    vector<ll> A(N);
    rep(i, N){
        cin >> A[i];
    }

    ll ans = 0;
    rep(i, 101){
        int cnt = 0;
        rep(j, N){
            if(A[j]>=i) cnt++;
        }
        if(cnt >= i) ans = i;
    }

    cout << ans << endl;
}
