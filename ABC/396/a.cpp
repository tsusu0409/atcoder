#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N; cin >> N;
    vector<int> A(N);
    rep(i, N){
        cin >> A[i];
    }

    bool ans = 0;
    rep(i, N-2){
        if(A[i] == A[i+1] && A[i] == A[i+2]){
            ans = 1;
        }
    }

    if(ans){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}
