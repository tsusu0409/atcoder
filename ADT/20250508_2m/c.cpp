#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N; cin >> N;
    vector<string> s(N);
    vector<string> t(N);
    map<string, int> data;
    rep(i, N){
        cin >> s[i] >> t[i];
        data[s[i]] ++;
        data[t[i]] ++;
    }

    bool ans = 1;
    vector<string> a = {};
    rep(i, N){
        if(data[s[i]]==1 || data[t[i]]==1) continue;

        
    }
}