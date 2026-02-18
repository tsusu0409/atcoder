#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N, K; cin >> N >> K;
    vector<int> H(N); rep(i, N) cin >> H[i];

    sort(H.begin(), H.end());

    if(N <= K){
        cout << 0 << endl;
        return 0;
    }

    ll ans = 0;
    rep(i, N-K){
        ans += H[i];
    }

    cout << ans << endl;
}
