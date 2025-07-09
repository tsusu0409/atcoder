#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    ll N; cin >> N;
    set<ll> ans;

    int maxA = 0;
    ll tmp = 1;
    while(1){
        tmp *= 2;
        if(tmp<=N) maxA ++;
        else break;
    }

    for(int a=1; a<=maxA; a++){
        ll maxB = N / pow(2, a);
        sqrt(maxB);
    }
    cout << ans.size() << endl;
}
