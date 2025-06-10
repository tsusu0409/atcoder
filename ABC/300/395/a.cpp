#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N; cin >> N;
    bool ans = 1;
    vector<int> A(N);
    rep(i, N){
        cin >> A[i];
    }

    rep(i, N-1){
        if(A[i] < A[i+1]){
            ans = 1;
        }
        else{
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
