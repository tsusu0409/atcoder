#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N, L, R; cin >> N >> L >> R;
    string S; cin >> S;

    bool ans = 1;
    for(int i=L-1; i<R; i++){
        if(S[i]!='o') ans = 0;
    }

    if(ans)cout << "Yes" << endl;
    else cout << "No" << endl;
}
