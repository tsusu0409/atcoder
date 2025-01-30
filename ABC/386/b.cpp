#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
  string S;
  cin >> S;
  int ans = 0;
  int tmp = 0;
  rep(i, S.size()) {
    if(S.at(i) != '0') {
      tmp = 0;
      ans++;
    }
    else {
      if(tmp == 0) {
        tmp = 1;
        ans ++;
      }
      else {
        tmp = 0;
      }
    }
  }
  cout << ans << endl;
}
