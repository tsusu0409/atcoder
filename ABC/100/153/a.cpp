#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
  int H, A;
  cin >> H >> A;
  int ans = 0;
  while(H>0) {
    ans ++;
    H -= A;
  }
  cout << ans << endl;
}
