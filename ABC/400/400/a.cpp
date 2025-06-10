#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int a; cin >> a;
    if(400 % a == 0){
        cout << 400 /a << endl;
    }
    else {
        cout << -1 << endl;
    }
}
