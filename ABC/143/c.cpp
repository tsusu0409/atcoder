#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N; cin >> N;
    string S; cin >> S;

    int ans = 0;
    rep(i, N){
        if(S[i] != S[i+1]){
            ans ++;
        }
    }
    cout << ans << endl;
}