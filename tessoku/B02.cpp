#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int A, B; cin >> A >> B;
    int ans = 0;
    for(int i = A; i < B+1; i ++){
        if(100%i == 0){
            ans ++;
        }
    }

    if(ans){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}
