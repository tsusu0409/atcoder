#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    vector<string> S(8);
    S = {"N", "NE", "E", "SE", "S", "SW", "W", "NW"};
    string D;
    cin >> D;
    int n;
    rep(i, 8){
        if(D==S.at(i)){
            n = i;
        }
    }
    n += 4;
    n %= 8;
    cout << S.at(n) << endl;
}