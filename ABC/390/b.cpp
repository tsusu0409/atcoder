#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N;
    cin >> N;
    vector<ll> A(N);
    rep(i, N){
        cin >> A.at(i);
    }
    int ans = 1;
    rep(i, N-2){
        ll p = A.at(i) * A.at(i+2);
        ll q = A.at(i+1) * A.at(i+1);
        if(p!=q){
            ans = 0;
            break;
        }
    }
    
    if(ans){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}
