#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (long long i = 0; i < (long long)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
  ll L, R;
  cin >> L >> R;
  ll n = R - L;
  ll ans = 0;
  rep(i,n+1) {
    string S = to_string(L + i);
    int headNum = 0;
    int check = 1;
    rep(j, S.size()) {
      if(headNum == 0) {
        headNum = S.at(j);
      }
      else if(headNum > S.at(j)) {
        continue;
      }
      else {
        check *= 0;
      }
    }
    if(check == 1) {
      ans ++;
    }
  }
  cout << ans << endl;
}
