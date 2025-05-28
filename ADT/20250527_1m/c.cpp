#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    string S; cin >> S;
    string T; cin >> T;
    int n = S.size();

    bool ans = 1;
    int K;
    if(T[0]-S[0]>=0){
        K = T[0] - S[0];
    }
    else{
        K = T[0] - S[0] + 26;
    }
    rep(i, n){
        if(T[i] - S[i] == K) continue;
        if(T[i] - S[i] + 26 == K) continue;
        ans = 0;
    }

    if(ans){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}
