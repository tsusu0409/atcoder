#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    string S; cin >> S;
    ll N = S.size();

    string S2 = S;
    reverse(S2.begin(), S2.end());
    
    ll aScount = 0;
    ll aEcount = 0;

    bool aScheck = 1;
    bool aEcheck = 1;

    rep(i, N){
        if(!aScheck) break;
        if(S[i]=='a') aScount++;
        else aScheck = 0;
    }
    rep(i, N){
        if(!aEcheck) break;
        if(S2[i]=='a') aEcount++;
        else aEcheck = 0;
    }

    if(aScount > aEcount){
        cout << "No" << endl;
        return 0;
    }

    if(aScount < aEcount){
        rep(i, aEcount-aScount){
            S2.push_back('a');
        }
    }

    bool ans = 1;
    int i = 0;
    int j = S2.size()-1;
    while(1){
        if(i>=j) break;
        if(S2[i] == S2[j]){
            i++; j--;
        }
        else{
            ans = 0;
            break;
        }
    }
    
    if(ans){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}