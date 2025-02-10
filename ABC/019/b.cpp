#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    string s; cin >> s;
    int n = s.size();

    vector<string> t = {};
    char now = s[0];
    string tmp = {};
    tmp.push_back(s[0]);
    for(int i = 1; i < n; i++){
        if(now == s[i]){
            tmp.push_back(s[i]);
        }
        else{
            t.push_back(tmp);
            tmp = s[i];
        }
    }
    t.push_back(tmp);

    rep(i, t.size()){
        string c = t[i];
        t[i] = {};
        t[i] += c[0];
        t[i] += to_string(c.size());
    }

    rep(i, t.size()-1){
        cout << t[i];
    }
    cout << t[t.size()-1] << endl;
}