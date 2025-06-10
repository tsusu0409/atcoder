#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    string S; cin >> S;
    int n = S.size();

    int count = 0;
    vector<int> ans = {};
    rep(i, n){
        if(S[i] == '-'){
            count ++;
        }
        else if(i != 0 && S[i] == '|'){
            ans.push_back(count);
            count = 0;
        }
    }

    rep(i, ans.size() - 1){
        cout << ans[i] << " ";
    }
    cout << ans[ans.size()-1] << endl;
}
