#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N, M; cin >> N >> M;
    vector<int> A(N);
    rep(i, N){
        cin >> A[i];
    }

    int maxLen = 0;
    vector<int> len(N);
    rep(i, N){
        len[i] = to_string(A[i]).size();
        maxLen = max(maxLen, len[i]);
    }

    vector<ll> pow10modM(maxLen+1, 1);
    for(int i=1; i<maxLen+1; i++){
        pow10modM[i] = pow10modM[i-1] * 10;
        pow10modM[i] %= M;
    }

    vector<map<ll, ll>> cnt(maxLen+1);
    rep(i, N){
        cnt[len[i]][A[i]%M] ++;
    }

    ll ans = 0;
    rep(i, N){
        for(int j=1; j<maxLen+1; j++){
            ll num = (M - (A[i] * pow10modM[j]%M)) % M;
            ans += cnt[j][num];
        }
    }
    
    cout << ans << endl;
}
