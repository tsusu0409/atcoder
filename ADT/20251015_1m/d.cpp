#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    string S; cin >> S;
    int large = 0;
    int small = 0;

    int n = S.size();
    rep(i, n){
        if(S[i]>='a' && S[i]<='z') small++;
        else large++;
    }

    if(small<large){
        rep(i, n){
            if(S[i]>='a' && S[i]<='z'){
                char out = S[i] + 'A' - 'a'; 
                cout << out;
            }
            else cout << S[i];
        }
    }
    else{
        rep(i, n){
            if(S[i]>='A' && S[i]<='Z'){
                char out = S[i] + 'a' - 'A';
                cout << out;
            }
            else cout << S[i];
        }
    }
    cout << endl;
}
