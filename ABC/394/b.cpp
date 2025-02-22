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
    map<string, int> data;
    rep(i, N){
        string S;
        cin >> S;
        data[S] = S.size();
    }

    vector<pair<int, string>> v = {};
    for(auto i: data){
        v.push_back({i.second, i.first});
    }

    sort(v.begin(), v.end());
    rep(i, N-1){
        cout << v[i].second;
    }
    cout << v[N-1].second << endl;
}
