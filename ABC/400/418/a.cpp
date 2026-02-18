#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N; string S; cin >> N >> S;
    string T = "tea";

    bool ans = 1;
    if(S[N-3] != T[0]) ans = 0;
    if(S[N-2] != T[1]) ans = 0;
    if(S[N-1] != T[2]) ans = 0;

    if(ans) cout << "Yes" << endl;
    else cout << "No" << endl;
}
