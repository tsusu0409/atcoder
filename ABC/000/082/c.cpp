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
    vector<int> a(N);
    map<int, int> num;
    rep(i, N){
        cin >> a[i];
        num[a[i]] ++;
    }

    int ans = 0;
    for(auto i: num){
        if(i.first > i.second){
            ans += i.second;
        }
        else if(i.first < i.second){
            ans += (i.second - i.first);
        }
    }
    cout << ans << endl;
}
