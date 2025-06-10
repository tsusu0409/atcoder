#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N; cin >> N;
    vector<int> q(N);
    vector<int> r(N);
    rep(i, N){
        cin >> q[i] >> r[i];
    }

    int Q; cin >> Q;
    rep(i, Q){
        int t, d;
        cin >> t >> d;

        if(d % q[t-1] == r[t-1]){
            cout << d << endl;
        }
        else{
            int NowR = d % q[t-1];
            if(NowR > r[t-1]){
                cout << d + q[t-1] - NowR + r[t-1] << endl;
            }
            else{
                cout << d + r[t-1] - NowR << endl;
            }
        }
    }
}
