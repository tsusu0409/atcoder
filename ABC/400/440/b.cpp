#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N; cin >> N;
    vector<P> T(N);
    rep(i, N){
        int t; cin >> t;
        T[i].first = t;
        T[i].second = i + 1;
    }

    sort(T.begin(), T.end());

    rep(i, 3) cout << T[i].second << ' ';
    cout << endl;
}
