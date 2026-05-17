#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    ll X; cin >> X;
    int Q; cin >> Q;
    multiset<ll> data;
    data.insert(X);

    auto mid = data.begin();
    ll last = X;

    rep(q, Q){
        ll A, B; cin >> A >> B;
        data.insert(A);
        data.insert(B);

        if(A<last && B<last) mid--;
        else if(A>last && B>last) mid++;

        cout << *mid << endl;
        last = *mid;
    }
}
