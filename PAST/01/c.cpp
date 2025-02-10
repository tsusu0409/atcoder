#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    vector<int> num(6);
    rep(i, 6){
        cin >> num[i];
    }

    sort(num.rbegin(), num.rend());

    cout << num[2] << endl;
}