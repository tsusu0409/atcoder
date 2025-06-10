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

    vector<char> ans = {};

    rep(i, S.size()){
        if(S[i] == '2'){
            ans.push_back(2);
        }
    }

    rep(i, ans.size()){
        cout << 2;
    }
    cout << endl;
}
