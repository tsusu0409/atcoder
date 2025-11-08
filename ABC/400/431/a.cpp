#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int H, B; cin >> H >> B;
    if(H<=B) cout << 0 << endl;
    else cout << H-B << endl;
}
