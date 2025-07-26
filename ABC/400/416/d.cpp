#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int T; cin >> T;
    rep(t, T){
        int N, M; cin >> N >> M;
        vector<ll> A(N);
        vector<ll> B(N);
        rep(i, N) cin >> A[i];
        rep(i, N) cin >> B[i];

        vector<int> Adata(M, 0);
        vector<int> Bdata(M, 0);
        rep(i, N){
            int aModM = A[i] % M;
            int bModM = B[i] % M;

            Adata[aModM] ++;
            Bdata[bModM] ++;
        }

        // 0になるものの処理
        rep(i, M){
            if(i==0) continue;
            int chibi = min(Adata[i], Bdata[M-i]);
            
            Adata[i] -= chibi;
            Bdata[M-i] -= chibi;
        }

        for(int i=2; i<M; i++){
            if(i*2 > M) break;

            
        }
    }
}
