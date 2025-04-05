#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    ll n; cin >> n;

    ll bMax = sqrt(n) + 1;
    set<ll> ansData;

    for(ll b = 1; b < bMax; b++){
        ll b2 = b * b;
        if(b2 > n){
            break;
        }
        ll nowA = b2;
        while(nowA <= n){
            ansData.insert(nowA);
            if(nowA <= (n / 2)){
                nowA *= 2;
            }
        }
    } 

    cout << ansData.size() << endl;
}
