#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    string S; cin >> S;
    int n = S.size();
    bool next = 1;
    rep(i, n){
        if(S[i]=='#'){
            cout << i+1;
            if(next){
                cout << ',';
                next = 0;
            }
            else{
                cout << endl;
                next = 1;
            }
        }
    }
}
