#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    string N; cin >> N;

    int ans = 0;
    rep(i, N.size()){
        int keta = 1 << (N.size() - 1 - i);
        ans += (keta * (N[i] - '0'));
    }

    cout << ans << endl;
}
