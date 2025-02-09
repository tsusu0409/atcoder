#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N;
    cin >> N;
    vector<ll> A(N);
    rep(i, N){
        cin >> A[i];
    }

    ll ans = N * (N-1) / 2;
    map<ll, ll> num;
    rep(i, N){
        num[A[i]] ++;
    }
    for(auto i: num){
        if(i.second > 1){
            ll tmp = i.second;
            ans -= tmp * (tmp-1) / 2;
        }
    }
    cout << ans << endl;
}
