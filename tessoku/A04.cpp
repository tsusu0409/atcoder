#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N; cin >> N;
    vector<int> ans(10, 0);
    rep(i, 10){
        ans[9-i] = N % 2;
        N /= 2;
    }

    rep(i, 10){
        cout << ans[i];
    }
    cout << endl;
}
