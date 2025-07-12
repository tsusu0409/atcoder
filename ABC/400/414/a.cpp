#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N, L, R; cin >> N >> L >> R;
    vector<int> X(N);
    vector<int> Y(N);
    rep(i, N) cin >> X[i] >> Y[i];

    int ans = 0;
    rep(i, N){
        if(X[i]<=L && R<=Y[i]) ans++;
    }

    cout << ans << endl;
}
