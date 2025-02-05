#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int K;
    int S;
    cin >> K >> S;
    int ans = 0;
    rep(x, K+1){
        rep(y, K+1){
            int z = S - x - y;
            if(0 <= z && z <= K){
                ans ++;
            }
        }
    }
    cout << ans << endl;
}
