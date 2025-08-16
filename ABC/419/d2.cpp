#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N, M; cin >> N >> M;
    string S; cin >> S;
    string T; cin >> T;
    vector<int> L(M);
    vector<int> R(M);
    rep(i, M){
        cin >> L[i] >> R[i];
    }

    vector<int> flip(N+1, 0);

    rep(i, M){
        flip[L[i]-1] ^= 1;
        flip[R[i]] ^= 1;
    }

    int check = 0;
    rep(i, N){
        check ^= flip[i];
        if(!check) cout << S[i];
        else cout << T[i];
    }

    cout << endl;
}
