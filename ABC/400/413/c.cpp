#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int Q; cin >> Q;
    vector<pair<ll, ll>> data = {};
    int now = 0;
    rep(i, Q){
        int q; cin >> q;
        if(q==1){
            ll c; cin >> c;
            ll x; cin >> x;
            data.push_back({c, x});
        }
        if(q==2){
            ll k; cin >> k;
            ll ans = 0;

            while(k>0 && now<data.size()){
                ll current_c; current_c = data[now].first;
                ll current_x; current_x = data[now].second;
                if(k >= current_c){
                    ans += current_c * current_x;
                    k -= current_c;
                    now ++;
                }
                else{
                    ans += k * current_x;
                    data[now].first -= k;
                    k = 0;
                }
            }
            cout << ans << endl;
        }
    }
}
