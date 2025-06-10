#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n; cin >> n;
    vector<ll> c(N);
    rep(i, n){
        cin >> c[i];
    }
    int m; cin >> m;
    vector<int> k;
    vector<vector<int>> kData(m);
    rep(i, m){
        cin >> k[i];
        rep(j, k[i]){
            int k; cin >> k;
            kData[i].push_back(k);
        }
    }

    
}
