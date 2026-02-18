#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    ll N, K; cin >> N >> K;

    ll ans = N % K;
    if(ans > (K/2)) cout << K - ans << endl;
    else cout << ans << endl;
}
