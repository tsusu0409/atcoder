#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N, M; cin >> N >> M;
    vector<vector<int>> A(M, vector<int>(N));
    rep(i, M){
        rep(j, N){
            cin >> A[i][j];
        }
    }

    vector<map<int, int>> tonari(N);
    rep(i, M){
        rep(j, N){
            if(j == 0){
                tonari[A[i][j]-1][A[i][j+1]] ++;
            }
            else if(j == N-1){
                tonari[A[i][j]-1][A[i][j-1]] ++;
            }
            else{
                tonari[A[i][j]-1][A[i][j+1]] ++;
                tonari[A[i][j]-1][A[i][j-1]] ++;
            }
        }
    }

    int ans = 0;
    rep(i, N){
        for(auto j: tonari[i]){
            if(j.second == 0){
                ans ++;
            }
        }
    }

    cout << ans / 2 << endl;
}
