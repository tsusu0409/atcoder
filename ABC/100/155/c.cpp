#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N;
    cin >> N;
    vector<string> S(N);
    rep(i, N){
        cin >> S[i];
    }

    map<string, int> num;
    rep(i, N){
        num[S[i]] ++;
    }

    vector<string> ans = {};
    int deka = 0;
    for(auto i: num){
        deka = max(deka, i.second);
    }

    for(auto i: num){
        if(i.second == deka){
            ans.push_back(i.first);
        }
    }
    sort(ans.begin(), ans.end());

    rep(i, ans.size()){
        cout << ans[i] << endl;
    }
}
