#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    vector<int> P(3);
    rep(i, 3){
        cin >> P.at(i);
    }
    int ans;
    if(P.at(1) == P.at(0)){
        if(P.at(2) == P.at(0)){
            cout << 1 << endl;
        }
        else{
            cout << 2 << endl;
        }
    }
    else{
        if(P.at(2) == P.at(0) || P.at(2) == P.at(1)){
            cout << 2 << endl;
        }
        else{
            cout << 3 << endl;
        }
    }
}
