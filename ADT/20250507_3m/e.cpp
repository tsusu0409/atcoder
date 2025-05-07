#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    ll N, X; cin >> N >> X;
    vector<ll> L(N);
    vector<vector<ll>> a(N, vector<int>(0));
    rep(i, N){
        int l; cin >> l;
        L[i] == l;
        rep(j, l){
            a[i].push_back(l);
        }
    }

    // 全探索は間に合うが、全探索をどう実装しようか

    ll pat = 1;
    rep(i, N){
        pat *= L[i];
    }

    int p = 0;
    vector<ll> score(pat);
    rep(i, pat){
        rep(j, N){
            rep(k, L[j]){
                
            }
        }
    }
}