#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
  int X;
  cin >> X;
  int ans = 0;
  rep(i, 9) {
    rep(j, 9){
      if((i+1)*(j+1) == X) {
        continue;
      }
      else {
        ans += (i+1) * (j+1);
      }
    }
  }
  cout << ans << endl;
}
