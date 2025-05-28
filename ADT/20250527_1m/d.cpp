#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    string S, T; cin >> S >> T;
    bool ans = 0;

    int SSize = S.size();
    int TSize = T.size();

    int j = 0;
    rep(i, SSize){
        if(S[i] == T[j]){
            j ++;
        }
        else{
            j = 0;
        }

        if(j==TSize){
            ans = 1;
        }
    }

    if(ans) cout << "Yes" << endl;
    else cout << "No" << endl;
}
