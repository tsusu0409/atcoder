#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int A, B, C, X;
    cin >> A >> B >> C >> X;
    int ans = 0;
    rep(a, A+1){
        rep(b, B+1){
            rep(c, C+1){
                int sum = a*500 + b*100 + c*50;
                if(sum == X){
                    ans++;
                }
            }
        }
    }
    cout << ans << endl;
}