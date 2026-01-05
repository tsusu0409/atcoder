#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N; cin >> N;
    ll ans = 0;
    ans = pow(2, N);
    ans -= 2*N;

    cout << ans << endl;
}
