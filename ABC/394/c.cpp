#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    string S;
    cin >> S;

    ll n = S.size();
    for(int i = 0; i < n-1;){
        if(S[i] == 'W' && S[i+1] == 'A'){
            S[i] = 'A';
            S[i+1] = 'C';
            i --;
        }
        else{
            i ++;
        }
    }

    rep(i, n-1){
        cout << S[i];
    }
    cout << S[n-1] << endl;
}
