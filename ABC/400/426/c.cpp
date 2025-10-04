#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N, Q; cin >> N >> Q;
    vector<int> X(Q);
    vector<int> Y(Q);
    rep(i, Q) cin >> X[i] >> Y[i];

    vector<int> ver(N);
    rep(i, N) ver[i] = i+1;

    int oldMin = 0;
    rep(i, Q){
        int x = X[i];
        int y = Y[i];

        int cnt = 0;
        cout << sum[x] << endl;
        oldMin = min(oldMin, x);
        sum[y] += sum[x];

        for(int j=oldMin+1; j<y; j++){
            sum[j] = 0;
        }
    }
}
