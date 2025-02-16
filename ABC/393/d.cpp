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
    int n0 = 0;
    rep(i, N){
        if(S[i] == '0'){
            n0 ++;
        }
    }
    int n1 = N - n0;

    int ans = 0;
    rep(i, N){
        if(S[i] == '0'){
            int l = 0;
            rep(j, i+1){
                if(S[j] == '1'){
                    l ++;
                }
            }
            int r = n1 - l;
            ans += min(l, r);
        }
    }
    cout << ans << endl;
}
