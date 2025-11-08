#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    ll X; cin >> X;
    int N; cin >> N;
    vector<int> W(N);
    rep(i, N) cin >> W[i];

    vector<bool> on(N, 0);
    int Q; cin >> Q;
    rep(q, Q){
        int P; cin >> P;
        P--;
        if(on[P]){
            X -= W[P];
            on[P] = 0;
        }
        else{
            X += W[P];
            on[P] = 1;
        }
        cout << X << endl;
    }
}
