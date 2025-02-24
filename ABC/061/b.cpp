#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N, M; cin >> N >> M;
    map<int, int> city;

    rep(i, M){
        int a, b;
        cin >> a >> b;
        city[a] ++;
        city[b] ++;
    }

    rep(i, N){
        cout << city[i+1] << endl;
    }
}
