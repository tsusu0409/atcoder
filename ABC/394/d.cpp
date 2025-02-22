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
    ll j = 1;
    for(ll i = 0; i < n-1;){
        if(i == j){
            j ++;
        }
        if(S[i] == 'x'){
            i ++;
            continue;
        }

        if(S[j] != 'x' && S[i] == 'x'){
            i ++;
            continue;
        }

        if(S[i] == '(' && S[j] == ')'){
            S[i] = 'x';
            S[j] = 'x';
            i --;
            j ++;
        }
        else if(S[i] == '[' && S[j] == ']'){
            S[i] = 'x';
            S[j] = 'x';
            i --;
            j ++;
        }
        else if(S[i] == '<' && S[j] == '>'){
            S[i] = 'x';
            S[j] = 'x';
            i --;
            j ++;
        }
        else{
            i ++;
            j ++;
        }
    }

    int ans = 1;
    rep(i, n){
        if(S[i] == 'x'){

        }
        else {
            ans *= 0;
        }
    }
    
    if(ans){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}
