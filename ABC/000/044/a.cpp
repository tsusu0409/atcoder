#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N, K, X, Y;
    cin >> N >> K >> X >> Y;
    int ans = 0;
    rep(i, N){
        if(i < K){
            ans += X;
        }
        else{
            ans += Y;
        }
    }
    cout << ans << endl;
}
