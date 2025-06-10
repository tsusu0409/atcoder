#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
  int K;
  cin >> K;
  int A, B;
  cin >> A >> B;
  int ans = 0;
  rep(i, B-A+1){
    if((A+i) % K == 0) {
      ans = 1;
      break;
    }
  }
  if(ans == 1){
    cout << "OK" << endl;
  }
  else{
    cout << "NG" << endl;
  }
}
