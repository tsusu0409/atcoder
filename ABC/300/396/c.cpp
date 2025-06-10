#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    ll N, M; cin >> N >> M;
    vector<ll> B(N);
    ll bPlus = 0;
    for(ll i = 0; i < N; i++){
        cin >> B[i];
        if(B[i] > 0){
            bPlus ++;
        }
    }
    sort(B.rbegin(), B.rend());

    vector<ll> W(M);
    ll wPlus = 0;
    for(ll i = 0; i < M; i++){
        cin >> W[i];
        if(W[i] > 0){
            wPlus ++;
        }
    }
    sort(W.rbegin(), W.rend());

    ll ans = 0;
    if(bPlus >= wPlus){
        for(ll i = 0; i < bPlus; i++){
            ans += B[i];
        }
        for(ll i = 0; i < wPlus; i++){
            ans += W[i];
        }
        cout << ans << endl;
    }
    
    else{
        rep(i, bPlus){
            ans += B[i];
            ans += W[i];
        }
        int i = bPlus;
        while(1){
            if(i == min(N, M)){
                break;
            }
            ll b = B[i];
            ll w = W[i];
            if((b+w)>0){
                ans += b;
                ans += w;
                i ++;
            }
            else{
                break;
            }
        }
        cout << ans << endl;
    }
}
