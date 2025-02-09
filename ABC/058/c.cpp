#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n;
    cin >> n;
    vector<string> S(n);
    rep(i, n){
        cin >> S[i];
    }

    vector<map<char, int>> num;
    rep(i, n){
        rep(j, S[i].size()){
            num[i][S[j]] ++;
        }
    }

    vector<char> ans = {};
    for(auto i: num){
        if(i.second == n){
            ans.push_back(i.first);
        }
    }
    sort(ans.begin(), ans.end());

    rep(i, ans.size()-1){
        cout << ans.at(i);
    }
    cout << ans.at(ans.size()-1) << endl;
}