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

    vector<map <char, int>> numEach(n);
    map<char, int> numAll;
    rep(i, n){
        rep(j, S.at(i).size()){
            numEach.at(i)[S.at(i).at(j)] ++;
            numAll[S.at(i).at(j)] ++;
        }
    }

    vector<char> ans = {};
    for(auto i: numAll){
        char search = i.first;
        int x = 50;
        rep(j, n){
            int tmp = numEach.at(j)[search];
            x = min(x, tmp);
        }
        rep(j, x){
            ans.push_back(search);
        }
    }

    sort(ans.begin(), ans.end());

    ll y = ans.size();
    if(y==0){
        cout << "" << endl;
    }
    else{
        rep(i, y-1){
            cout << ans.at(i);
        }
        cout << ans.at(y-1) << endl;
    }
}