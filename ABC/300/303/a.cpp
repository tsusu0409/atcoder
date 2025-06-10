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
    string T; cin >> T;

    bool ans = 1;
    rep(i, N){
        int check1 = 0;
        int check2 = 0;
        int check3 = 0;
        if(S[i] == T[i]){
            check1 = 1;
        }
        else if(S[i] == '1' && T[i] == 'l'){
            check2 = 1;
        }
        else if(S[i] == 'l' && T[i] == '1'){
            check2 = 1;
        }
        

        else if(S[i] == '0' && T[i] == 'o'){
            check3 = 1;
        }
        else if(S[i] == 'o' && T[i] == '0'){
               check3 = 1;
        }

        if(check1+check2+check3){
        }
        else{
            ans = 0;
            break;
        }
    }
    
    if(ans){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}
