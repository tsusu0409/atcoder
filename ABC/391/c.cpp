#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N, Q; cin >> N >> Q;

    vector<int> data(N);
    map<int, int> mp;
    rep(i, N){
        data[i] = i;
        mp[i] ++;
    }

    int ans = 0;
    rep(i, Q){
        int q; cin >> q;
        if(q == 1){
            int P, H;
            cin >> P >> H;
            int b = mp[data[P-1]];
            mp[data[P-1]] --;
            if(b >= 2 && mp[data[P-1]] < 2){
                ans --;
            }

            data[P-1] = H-1;
            b = mp[data[P-1]];
            mp[data[P-1]] ++;
            if(b < 2 && mp[data[P-1]] >= 2){
                ans ++;
            }
        }
        else{
            cout << ans << endl;
        }
    }
}
