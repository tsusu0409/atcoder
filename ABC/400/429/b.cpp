#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N, M; cin >> N >> M;
    vector<int> A(N);
    rep(i, N) cin >> A[i];

    int sum = 0;
    rep(i, N) sum += A[i];

    bool ans = 0;
    rep(i, N){
        if(sum-M == A[i]){
            ans = 1;
            break;
        }
    }

    if(ans) cout << "Yes" << endl;
    else cout << "No" << endl;
}
