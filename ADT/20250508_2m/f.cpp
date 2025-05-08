#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N; cin >> N;
    vector<vector<char>> S1(N, vector<char>(N));
    vector<vector<char>> T(N, vector<char>(N));
    rep(i, N){
        rep(j, N){
            cin >> S1[i];
        }
    }
    rep(i, N){
        rep(j, N){
            cin >> T[i];
        }
    }

    bool ans = 0;

    vector<pair<int, int>> data1 = {};
    bool check1 = 0;
    rep(i, N){
        rep(j, N){
            if(!check1){
                if(S1[i][j] == '#'){
                    check1 = 1;
                    data1.push_back((i, j));
                }
            }
            if(S2[i][j] == '#'){
                int si = data1[0].first;
                int sj = data1[0].second;
                data1.push_back((i-si, j-sj));
            }
        }
    }

    bool scan1 = 0;
    int si1 = -1; int sj1 = -1;
    rep(i, N){
        rep(j, N){
            if(!scan1) continue;
            if(T[i][j] =='#'){
                scan1 = 1;
                si1 = i; sj1 = j;
            }
        }
    }

    vector<vector<char>> S2(N, vector<char>(N));
    rep(i, N){
        rep(j, N){
            S2[i][j] = S1[N-j][i];
        }
    }
    
    vector<vector<char>> S3(N, vector<char>(N));
    rep(i, N){
        rep(j, N){
            S3[i][j] = S2[N-j][i];
        }
    }

    vector<vector<char>> S4(N, vector<char>(N));
    rep(i, N){
        rep(j, N){
            S4[i][j] = S3[N-j][i];
        }
    }

}