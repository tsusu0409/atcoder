#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N; cin >> N;
    vector<int> A(N);
    rep(i, N){
        cin >> A[i];
    }

    ll sumA = 0;
    ll sumSame = 0;
    rep(i, N){
        sumA += A[i];
    }
    rep(i, N){
        sumSame += A[i]*A[i];
    }

    ll sumAll = sumA * sumA;
    ll ans = (sumAll - sumSame) / 2;

    cout << ans << endl;
}