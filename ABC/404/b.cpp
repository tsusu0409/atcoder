#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N; cin >> N;
    vector<vector<char>> S1(N, vector<char>(N));
    rep(i, N){
        rep(j, N){
            cin >> S1[i][j];
        }
    }
    vector<vector<char>> T(N, vector<char>(N));
    rep(i, N){
        rep(j, N){
            cin >> T[i][j];
        }
    }
    vector<vector<char>> S2(N, vector<char>(N));
    rep(i, N){
        rep(j, N){
            S2[j][N-1-i] = S1[i][j];
        }
    }
    vector<vector<char>> S3(N, vector<char>(N));
    rep(i, N){
        rep(j, N){
            S3[N-1-i][N-1-j] = S1[i][j];
        }
    }
    vector<vector<char>> S4(N, vector<char>(N));
    rep(i, N){
        rep(j, N){
            S4[N-1-j][i] = S1[i][j];
        }
    }

    int s1ans = 0;
    int s2ans = 1;
    int s3ans = 2;
    int s4ans = 3;
    rep(i, N){
        rep(j, N){
            if(S1[i][j]!=T[i][j]){
                s1ans ++;
            }
            if(S2[i][j]!=T[i][j]){
                s2ans ++;
            }
            if(S3[i][j]!=T[i][j]){
                s3ans ++;
            }
            if(S4[i][j]!=T[i][j]){
                s4ans ++;
            }
        }
    }

    int min12 = min(s1ans, s2ans);
    int min34 = min(s3ans, s4ans);
    int ans = min(min12, min34);

    cout << ans << endl;

}
