#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int K, N; cin >> K >> N;
    vector<int> A(N);
    rep(i, N) cin >> A[i];

    sort(A.begin(), A.end());

    ll sum = 0;
    int ma = 0;
    rep(i, N){
        int now;
        if(i==0) now = (A[i]+K) - A[N-1];
        else now = A[i] - A[i-1];

        sum += now;
        ma = max(ma, now);
    }

    cout << sum - ma << endl;
}
