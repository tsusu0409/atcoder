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
    map<int, int> total;
    rep(i, n){
        rep(j, S[i].size()){
            num[i][S[i][j]] ++;
            total[S[i][j]] ++;
        }
    }

    vector<char> ans = {};
    for(auto i: total){
        int t = 50;
        rep(j, n){
            int tmp = num[j][i.first];
            t = min(t, tmp);
        }
        rep(j, t){
            ans.push_back(i.first);
        }
    }


    sort(ans.begin(), ans.end());

    rep(i, ans.size()-1){
        cout << ans.at(i);
    }
    cout << ans.at(ans.size()-1) << endl;
}