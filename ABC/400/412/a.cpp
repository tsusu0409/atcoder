#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(){
    int N; cin >> N;
    vector<int> A(N);
    vector<int> B(N);
    rep(i, N) cin >> A[i] >> B[i];

    int ans = 0;
    rep(i, N){
        if(A[i]<B[i]) ans++;
    }
    cout << ans << endl;
}
