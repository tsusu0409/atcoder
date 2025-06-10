#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    string S;
    int ans = 1;
    cin >> S;

    if(S.at(0) != 'A'){
        ans *= 0;
    }

    int count = 0;
    rep(i, S.size()-3){
        if(S.at(i+2) == 'C'){
            count ++;
        }
    }
    if(count != 1){
        ans *= 0;
    }

    int cap = 0;
    rep(i, S.size()){
        if(isupper(S.at(i))){
            cap ++;
        }
    }
    if(cap != 2){
        ans *= 0;
    }

    if(ans){
        cout << "AC" << endl;
    }
    else{
        cout << "WA" << endl;
    }
}
