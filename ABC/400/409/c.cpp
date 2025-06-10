#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (long long i = 0; i < (long long)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    ll N, L; cin >> N >> L;
    vector<ll> d(N, 0);
    for(ll i=1; i<N; i++){
        cin >> d[i];
    }

    // modLかな
    vector<ll> plot(N, 0);
    map<ll, ll> plotMap = {};
    rep(i, N){
        if(i!=0){
            plot[i] = plot[i-1] + d[i];
            if(plot[i]>=L) plot[i]-=L;
        }
        
        plotMap[plot[i]] ++;
    }

    if(L%3 != 0){
        cout << 0 << endl;
        return 0;
    }

    ll ans = 0;
    ll roop = L / 3;
    rep(i, roop){
        ll point1 = plotMap[i];
        ll point2 = plotMap[i+roop];
        ll point3 = plotMap[i+roop*2];
        ans += point1 * point2 * point3;
    }

    cout << ans << endl;
}
