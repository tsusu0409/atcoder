#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N, K; cin >> N >> K;
    vector<ll> A(N);
    vector<ll> S(N, 0); 
    rep(i, N){
        cin >> A[i];
        if(i == 0){
            S[i] = A[i];
        }
        else{
            S[i] = S[i-1] + A[i];
        }
    }

    rep(i, N-K+1){
        if(i==0){
            cout << S[K-1] << endl;
        }
        else{
            cout << S[i+K-1] - S[i-1] << endl;
        }
    }

}
