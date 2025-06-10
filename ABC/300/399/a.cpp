#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N; cin >> N;
    string S, T; cin >> S >> T;
    int ans = 0;
    rep(i, N){
        if(S[i] != T[i]){
            ans++;
        }
    }
    cout << ans << endl;
}
