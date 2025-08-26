#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N, Q; cin >> N >> Q;
    vector<ll> A(N);
    vector<ll> B(N);
    rep(i, N) cin >> A[i];
    rep(i, N) cin >> B[i];

    ll sum = 0;
    rep(i, N){
        if(A[i]<B[i]) sum += A[i];
        else sum += B[i];
    }

    rep(q, Q){
        char c; cin >> c;
        int X; cin >> X;
        ll V; cin >> V;

        
        ll preMin = min(A[X-1], B[X-1]);

        if(c=='A') A[X-1] = V;
        if(c=='B') B[X-1] = V;
        
        ll curMin = min(A[X-1], B[X-1]);
        sum += curMin - preMin;
        
        cout << sum << endl;
    }
}
