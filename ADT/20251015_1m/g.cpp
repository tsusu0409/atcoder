#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N, Q; cin >> N >> Q;
    vector<int> A(N);
    rep(i, N) cin >> A[i];

    rep(q, Q){
        int X; cin >> X;
        ll ans = 0;
        rep(i, N){
            ans += abs(X-A[i]);
        }
        cout << ans << endl;
    }
}
