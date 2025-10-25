#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    ll N; cin >> N;
    vector<ll> A(N);
    map<ll, ll> data;
    set<ll> s;
    rep(i, N){
        cin >> A[i];
        data[A[i]] ++;
        s.insert(A[i]);
    }

    ll ans = 0;
    for(auto i: s){
        if(data[i]>=2){
            ll com = data[i] * (data[i]-1) / 2;
            ll p = N - data[i];
            ans += com * p;
        }
    }

    cout << ans << endl;
}
