#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    vector<int> S(4);
    rep(i, 4){
        cin >> S.at(i);
    }
    sort(S.begin(), S.end());
    int tmp = 0;
    int count = 0;
    rep(i, 4){
        if(i == 0 || S.at(i) != tmp){
            tmp = S.at(i);
            count ++;
        }
    }
    
    if(count == 2){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}
