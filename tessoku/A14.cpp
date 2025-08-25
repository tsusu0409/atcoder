#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
using ll = long long;
using P = pair<ll,ll>;

ll main() {
    ll N, K; cin >> N >> K;
    vector<ll> A(N);
    vector<ll> B(N);
    vector<ll> C(N);
    vector<ll> D(N);

    rep(i, N) cin >> A[i];
    rep(i, N) cin >> B[i];
    rep(i, N) cin >> C[i];
    rep(i, N) cin >> D[i];

    vector<ll> dpA;
    rep(i, N){
        if(A[i]>K){
            continue;
        }
        else dpA.push_back(A[i]);
    }

    vector<ll> dpB;
    for(auto d : dpA){
        rep(i, N){
            if(B[i]+d > K){
                continue;
            }
            else dpB.push_back(B[i]+d);
        }
    }

    vector<ll> dpC;
    for(auto d : dpB){
        rep(i, N){
            if(C[i]+d > K){
                continue;
            }
            else dpC.push_back(C[i]+d);
        }
    }

    vector<ll> dpD;
    for(auto d : dpC){
        rep(i, N){
            if(D[i]+d > K){
                continue;
            }
            else dpD.push_back(D[i]+d);
        }
    }

    bool ans = 0;
    for(auto d : dpD){
        if(d==K) ans = 1;
    }

    if(ans) cout << "Yes" << endl;
    else cout << "No" << endl;
}
