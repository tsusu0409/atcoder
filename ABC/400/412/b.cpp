#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(){
    string S, T; cin >> S >> T;
    int n = S.size();
    int t = T.size();

    bool ans = 1;
    rep(i, n){
        if(i==0) continue;
        if(S[i]>='A' && S[i]<='Z'){
            bool check = 0;
            rep(j, t){
                if(T[j]==S[i-1]){
                    check = 1;
                    break;
                }
            }
            if(!check) ans=0;
        }
    }

    if(ans) cout << "Yes" << endl;
    else cout << "No" << endl;
}
