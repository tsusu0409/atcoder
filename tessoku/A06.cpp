#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N, Q; cin >> N >> Q;
    vector<int> A(N);
    vector<int> sum(N, 0);
    rep(i, N){
        cin >> A[i];
        if(i==0){
            sum[i] = A[i];
        }
        else{
            sum[i] = sum[i-1] + A[i];
        }
    }

    rep(i, Q){
        int L, R; cin >> L >> R;
        if(L==1){
            cout << sum[R-1] << endl;
        }
        else{
            cout << sum[R-1] - sum[L-2] << endl;
        }
    }
}
