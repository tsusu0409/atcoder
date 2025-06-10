#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    string T, U; cin >> T >> U;
    bool ans = 0;
    int nT = T.size();
    int nU = U.size();

    rep(i, nT-nU+1){
        bool check = 1;
        rep(j, nU){
            if(T[i+j]==U[j] || T[i+j]=='?'){
                continue;
            }
            else{
                check = 0;
                break;
            }
        }
        if(check){
            ans = 1;
        }
    }

    if(ans){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}
