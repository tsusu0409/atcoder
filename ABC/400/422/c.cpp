#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int T; cin >> T;
    rep(t, T){
        ll a, b, c; cin >> a >> b >> c;
        ll minAC = min(a, c);
        ll per3 = (a+b+c) / 3;

        cout << min(minAC, per3) << endl;
    }
}
