#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N; cin >> N;
    vector<string> S(N);
    rep(i, N) cin >> S[i];

    int m = 0;
    rep(i, N){
        int now = S[i].size();
        m = max(m, now);
    }

    rep(i, N){
        int dot = (m - S[i].size()) / 2;
        rep(j, dot) cout << '.';
        cout << S[i];
        rep(j, dot) cout << '.';
        cout << endl;
    }
}
