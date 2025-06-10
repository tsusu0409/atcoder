#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    string S; cin >> S;
    int n = S.size();
    rep(i, n){
        if(S[i]>='A' && S[i]<='Z'){
            cout << S[i];
        }
    }
    cout << endl;
}
