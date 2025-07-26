#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N, Q; cin >> N >> Q;
    vector<ll> A(N);
    rep(i, N){
        A[i] = i+1;
    }

    ll kSum = 0;
    rep(i, Q){
        ll q; cin >> q;
        if(q==1){
            ll p; ll x; cin >> p >> x;
            p--;
            A[p] = x;
        }
        if(q==2){
            ll p; cin >> p;
            p --;
            p += kSum;
            while(p>=N) p -= N;
            cout << A[p] << endl;
        }
        if(q==3){
            ll k; cin >> k;
            kSum += k;
            while(kSum>=N) kSum -= N; 
        }
    }
}
