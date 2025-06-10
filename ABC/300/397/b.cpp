#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    string S; cin >> S;
    int ans = 0;
    int n = S.size();
    
    char need = 'i'; 
    rep(i, n){
        if(S[i] == need){
            if(need=='i'){
                need = 'o';
            }
            else{
                need = 'i';
            }
        }
        else{
            ans ++;
        }
    }
    if(S[n-1] == 'i'){
        ans ++;
    }
    cout << ans << endl;
}
