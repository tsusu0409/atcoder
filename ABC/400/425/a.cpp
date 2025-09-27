#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N; cin >> N;
    ll ans = 0;
    rep(j, N){
        int i = j+1;
        ll add = i * i * i;
        if(i%2==0) ans += add;
        else ans -= add;
    }
    cout << ans << endl;
}
