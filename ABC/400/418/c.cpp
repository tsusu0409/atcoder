#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N, Q; cin >> N >> Q;
    vector<ll> A(N);
    rep(i, N) cin >> A[i];

    ll maxA = 0;
    ll minA = 1e9;
    rep(i, N){
        maxA = max(maxA+1, A[i]);
        minA = min(minA+1, A[i]);
    }

    vector<ll> cnt(maxA, 0);
    vector<ll> sum(maxA, 0);
    rep(i, N){
        cnt[A[i]] ++;
        sum[A[i]] += A[i];
    }
    rep(i, maxA){
        if(i==0){
            cnt[i] = cnt[i];
            sum[i] = sum[i];
        }
        else{
            cnt[i] = cnt[i-1] + cnt[i];
            sum[i] = sum[i-1] + sum[i];
        }
    }

    rep(q, Q){
        ll b; cin >> b;

        if(maxA < b || cnt[b-1] == N){
            cout << -1 << endl;
            continue;
        }

        ll now = cnt[b-1];
        ll ans = 1 + sum[b-1] + (N - now) * (b - 1);

        cout << ans << endl;
    }
}
