#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    vector<int> ABC(3);
    rep(i, 3) cin >> ABC[i];

    sort(ABC.rbegin(), ABC.rend());

    rep(i, 3) cout << ABC[i];
    cout << endl;
}