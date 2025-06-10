#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N, M; cin >> N >> M;
    vector<vector <int>> d(N);
    rep(i, M){
        int a, b; cin >> a >> b;
        d[a-1].push_back(b-1);
        d[b-1].push_back(a-1);
    }

    string ans = "IMPOSSIBLE";
    rep(i, N){
        bool check1 = 0;
        bool checkN = 0;
        rep(j, d[i].size()){
            if(d[i][j] == 0){
                check1 = 1;
            }
            if(d[i][j] == N-1){
                checkN = 1;
            }
        }
        if(check1 && checkN){
            ans = "POSSIBLE";
        }
    }

    cout << ans << endl;
}
