#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int X, Y; cin >> X >> Y;
    int ans = (X+Y)%12;

    if(ans) cout << (X+Y)%12 << endl;
    else cout << 12 << endl;
}
