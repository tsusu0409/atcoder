#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    vector<int> S(3);
    rep(i, 3){
        cin >> S.at(i);
    }
    int cntFive = 0;
    int cntSeven = 0;
    rep(i, 3){
        if(S.at(i)==5){
            cntFive++;
        }
        if(S.at(i)==7){
            cntSeven++;
        }
    }
    
    if(cntFive==2 && cntSeven==1){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}
