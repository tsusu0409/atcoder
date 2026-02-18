#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N; cin >> N;
    vector<int> P(N);
    rep(i, N) cin >> P[i];

    int mini = 1e9;
    int ans = 0;
    rep(i, N){
        if(P[i]<mini){
            ans++;
        }

        mini = min(mini, P[i]);
    }

    cout << ans << endl;
}
