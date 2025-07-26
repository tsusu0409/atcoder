#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    string S; cin >> S;
    int n = S.size();

    bool oOk = 1;
    rep(i, n){
        if(S[i]=='#'){
            cout << '#';
            oOk = 1;
        }
        else if(S[i]=='.' && oOk){
            cout << 'o';
            oOk = 0;
        }
        else{
            cout << '.';
        }
    }
    cout << endl;
}
