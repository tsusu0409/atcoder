#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N, X; cin >> N >> X;
    vector<int> A(N);

    int ans = 0;
    rep(i, N){
        cin >> A[i];
        if(A[i] == X){
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
