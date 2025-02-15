#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N, M;
    cin >> N >> M;
    vector<map <int, int>> num(N);
    rep(i, M){
        int u, v;
        cin >> u >> v;
        num[u-1][v] ++;
        num[v-1][u] ++;
    }

    int r = 0;
    int d = 0;
    rep(i, N){
        r += (num[i][i+1] / 2);
        for(auto j: num[i]){
            if(i+1 == j.first){
                continue;
            }
            else if(j.second > 1){
                d += j.second-1;
            }
        }
    }
    d /= 2;
    cout << r+d << endl;
}
