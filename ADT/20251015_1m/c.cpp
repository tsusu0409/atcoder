#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    string S, T; cin >> S >> T;
    int N_S = S.size();
    int N_T = T.size();

    if(N_S>N_T){
        cout << "No" << endl;
        return 0;
    }

    bool ans = 1;
    rep(i, N_S){
        if(S[i]!=T[i]) ans = 0;
    }

    if(ans) cout << "Yes" << endl;
    else cout << "No" << endl;
}
