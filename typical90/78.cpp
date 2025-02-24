#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N, M; cin >> N >> M;
    map<int, int> d;
    rep(i, M){
        int a, b; cin >> a >> b;
        if(a > b){
            d[a] ++;
        }
        else{
            d[b] ++;
        }
    }

    int ans = 0;
    rep(i, N){
        if(d[i+1] == 1){
            ans ++;
        }
    }
    cout << ans << endl;
}
