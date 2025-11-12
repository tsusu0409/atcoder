#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int A, B, C, D; cin >> A >> B >> C >> D;
    bool ans = 1;
    if(A<=C){
        if(B<=D) ans = 1;
        else ans = 0;
    }

    if(!ans) cout << "Yes" << endl;
    else cout << "No" << endl;
}
