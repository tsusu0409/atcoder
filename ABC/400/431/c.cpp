#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N, M, K; cin >> N >> M >> K;
    vector<ll> H(N);
    rep(i, N) cin >> H[i];
    vector<ll> B(M);
    rep(i, M) cin >> B[i];

    sort(H.begin(), H.end());
    sort(B.begin(), B.end());

    int h=0; int b=0;
    int cnt = 0;

    while(h<N && b<M){
        if(H[h]<=B[b]){
            h++; b++;
            cnt++;
        }
        else{
            b++;
        }
    }

    if(K<=cnt) cout << "Yes" << endl;
    else cout << "No" << endl;
}
