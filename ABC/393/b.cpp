#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    string S; cin >> S;
    int n = S.size();
    int ans = 0;
    rep(i, n){
        if(S[i] == 'A'){
            int sa = 1;
            int b = i + sa;
            int c = i + 2*sa;
            while(c<n){
                if(S[b]=='B' && S[c]=='C'){
                    ans ++;
                }
                sa ++;
                b = i + sa;
                c = i + 2*sa;
            }
        }
    }
    cout << ans << endl;
}
