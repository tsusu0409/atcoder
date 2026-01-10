#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int X, Y; cin >> X >> Y;
    rep(i, Y){
        X *= 2;
    }
    cout << X << endl;
}
