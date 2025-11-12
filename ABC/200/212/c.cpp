#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N, M; cin >> N >> M;
    vector<int> A(N);
    vector<int> B(M);
    rep(i, N) cin >> A[i];
    rep(i, M) cin >> B[i];

    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    int i = 0;
    int j = 0;
    int ans = 1e9+2;

    while(i<N && j<M){
        ans = min(ans, abs(A[i]-B[j]));

        if(A[i]<B[j]) i++;
        else j++;
    }

    cout << ans << endl;
}
