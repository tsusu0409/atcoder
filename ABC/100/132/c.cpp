#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N; cin >> N;
    vector<int> d(N);
    rep(i, N) cin >> d[i];

    sort(d.begin(), d.end());

    int half = N / 2;

    int abcMax = d[half-1];
    int arcMin = d[half];

    cout << arcMin - abcMax << endl;
}
