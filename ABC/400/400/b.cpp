#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    ll n, m; cin >> n >> m;
    m ++;
    ll x = 0;
    ll num = 1;
    // ansの計算
    rep(i, m){
        x += num;
        num *= n;
        if(x>=1e9){
            break;
        }
    }

    if(x <= 1e9) {
        cout << x << endl;
    }
    else{
        cout << "inf" << endl;
    }
}
