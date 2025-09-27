#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N, Q; cin >> N >> Q;
    vector<int> A(N);
    rep(i, N) cin >> A[i];
    int moved = 0;

    vector<ll> sum(N, 0);
    rep(i, N){
        if(i==0) sum[i] = A[i];
        else sum[i] = sum[i-1] + A[i];
    }

    rep(q, Q){
        int x; cin >> x;
        if(x==1){
            int c; cin >> c;
            moved += c;
            moved %= N;
        }
        if(x==2){
            int l, r; cin >> l >> r;
            l = (l-1+moved) % N;
            r = (r-1+moved) % N;

            ll ans = 0;
            if(l<=r){
                if(l!=0) ans += sum[r] - sum[l-1];
                else ans += sum[r];
            }
            else{
                if(l!=0) ans += sum[N-1] - sum[l-1];
                else ans += sum[N-1];

                ans += sum[r];
            }
            cout << ans << endl;
        }
    }
}
