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
    sort(S.begin(), S.end());
    if(S.at(2) == S.at(1) + S.at(0)){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}
