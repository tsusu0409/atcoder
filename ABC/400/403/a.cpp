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

    int ans = 0;
    for(int i=0; i < N;){
        ans += A[i];
        i += 2;
    }

    cout << ans << endl;
}
