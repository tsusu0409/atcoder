#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N; cin >> N;
    vector<int> A(N);
    rep(i, N){
        cin >> A[i];
    }

    bool ans = 0;
    rep(i, N){
        rep(j, N){
            if(i==j){
                continue;
            }
            rep(k, N){
                if(i==k || j==k){
                    continue;
                }
                if(A[i]+A[j]+A[k] == 1000){
                    ans = 1;
                }
            }
        }
    }

    if(ans){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}
