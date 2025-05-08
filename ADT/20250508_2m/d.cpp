#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int S, T; cin >> S >> T;
    int ans = 0;
    rep(a, S+1){
        rep(b, S+1){
            rep(c, S+1){
                if(a+b+c > S) continue;
                if(a*b*c <= T) ans++;
            }
        }
    }
    cout << ans << endl;
}