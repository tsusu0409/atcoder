#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int A, B;
    cin >> A >> B;

    int s = A / B;
    int a = A % B;

    if(a>(B/2)) cout << s+1 << endl;
    else cout << s << endl;
}
