#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int D, F; cin >> D >> F;
    D %= 7;
    F = (F-D+7)%7;
    if(F==0) cout << 7 << endl;
    else cout << F << endl;
}
