#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

static ll lcm (int a, int b) {
	ll temp;
	ll c = a;
	c *= b;
	while((temp = a%b)!=0) {
		a = b;
		b = temp;
	}
	return (ll)(c/b);
}

int main() {
    int A, B; cin >> A >> B;
    cout << lcm(A, B) << endl;
}