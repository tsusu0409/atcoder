#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N; cin >> N;
    vector<int> p(N);
    rep(i, N) cin >> p[i];

    vector<int> q(N);
    rep(i, N){
        q[p[i]-1] = i+1;
    }

    rep(i, N){
        cout << q[i] << ' ';
    }
    cout << endl;
}
