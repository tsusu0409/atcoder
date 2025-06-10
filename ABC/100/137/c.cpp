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
    vector<string> s(N);
    rep(i, N){
        cin >> s.at(i);
        sort(s.at(i).begin(), s.at(i).end());
    }

    map<string, int> num;
    rep(i, N){
        num[s.at(i)] ++;
    }

    ll ans = 0;
    for(auto i: num){
        ll n = i.second;
        ans += n * (n-1) / 2;
    }
    cout << ans << endl;
}
