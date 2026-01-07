#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N, Q; cin >> N >> Q;
    vector<int> A(N);
    rep(i, N){
        A[i] = i + 1;
    }

    ll diff = 0;
    rep(query, Q){
        int q; cin >> q;
        if(q == 1){
            int p, x; cin >> p >> x;
            A[(p+diff-1)%N] = x;
        }
        if(q == 2){
            int p; cin >> p;
            cout << A[(p+diff-1)%N] << endl;
        }
        if(q == 3){
            int k; cin >> k;
            diff = (diff + k) % N;
        }
    }
}