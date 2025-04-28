#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    ll x; cin >> x;
    ll res = x / 11 * 2;
    ll r = x % 11;
    if(r>6){
        res += 2;
    }
    else if(r>0){
        res ++;
    }

    cout << res << endl;
}
