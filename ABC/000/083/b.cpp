#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
  int N, A, B;
  cin >> N >> A >> B;
  int ans = 0;
  rep(i, N+1) {
    int s = 0;
    int ci = i;
    while(ci > 0) {
      s += ci % 10;
      ci /= 10;
    }
    if((A<=s) && (s<=B)){
      ans += i;
    }
  }
  cout << ans << endl;
}
