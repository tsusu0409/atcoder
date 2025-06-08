#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N; cin >> N;
    string T, A; cin >> T >> A;

    bool ans = 0;
    rep(i, N){
        if(T[i]=='o' && A[i]=='o') ans = 1;
    }

    if(ans) cout << "Yes" << endl;
    else cout << "No" << endl;
}
