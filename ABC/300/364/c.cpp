#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    ll N, X, Y; cin >> N >> X >> Y;
    vector<int> A(N);
    vector<int> B(N);
    rep(i, N) cin >> A[i];
    rep(i, N) cin >> B[i];

    sort(A.rbegin(), A.rend());
    sort(B.rbegin(), B.rend());

    int ansA = 0;
    ll sumA = 0;
    rep(i, N){
        if(sumA > X) break;
        sumA += A[i];
        ansA ++;
    }

    int ansB = 0;
    ll sumB = 0;
    rep(i, N){
        if(sumB > Y) break;
        sumB += B[i];
        ansB ++;
    }

    cout << min(ansA, ansB) << endl;
}
