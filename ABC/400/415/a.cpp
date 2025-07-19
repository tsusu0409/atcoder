#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N; cin >> N;
    vector<int> A(N);
    rep(i,N){
        cin >> A[i];
    }
    int X; cin >> X;
    bool ans = 0;
    rep(i,N){
        if(X==A[i]) ans=1; 
    }

    if(ans) cout << "Yes" << endl;
    else cout << "No" << endl;
}
