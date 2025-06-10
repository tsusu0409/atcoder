#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    ll A, B; cin >> A >> B;
    if(A%B==0){
        cout << A/B << endl;
    } 
    else{
        cout << (A/B)+1 << endl;
    }
}
