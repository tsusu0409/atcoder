#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int A, B;
    cin >> A >> B;
    int p = A + B;
    int m = A - B;
    int x = A * B;
    int tmp = max(p, m);
    cout << max(tmp, x) << endl;
}
