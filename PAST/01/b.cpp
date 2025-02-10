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
        cin >> A[i];
    }

    for(int i = 1; i < N; i++){
        if(A[i] == A[i-1]){
            cout << "stay" << endl;
        }
        else if(A[i] > A[i-1]){
            cout << "up " << A[i] - A[i-1] << endl;
        }
        else{
            cout << "down " << A[i-1] - A[i] << endl;
        }
    }
}