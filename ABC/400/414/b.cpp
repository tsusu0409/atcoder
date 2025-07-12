#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N; cin >> N;
    vector<char> c(N);
    vector<ll> l(N);
    rep(i, N) cin >> c[i] >> l[i];

    ll lSum = 0;
    bool over100 = 0;
    rep(i, N){
        lSum += l[i];
        if(lSum > 100){
            over100 = 1;
            break;
        }
    }

    if(over100) cout << "Too Long" << endl;
    else{
        rep(i, N){
            rep(j, l[i]){
                cout << c[i];
            }
        }
        cout << endl;
    }
}
