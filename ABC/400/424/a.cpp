#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    bool ans = 0;

    if(a==b){
        ans = 1;
    }
    if(b==c) {
        ans = 1;
    }
    if(c==a){
        ans = 1;
    }

    if(ans) cout << "Yes" << endl;
    else cout << "No" << endl;
}
