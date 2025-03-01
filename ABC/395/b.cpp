#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N; cin >> N;
    vector<vector<char>> S(N, vector<char>(N));

    for(int i = 1; i < N+1; i ++){
        int j = N + 1 - i;
        if(i<=j){
            char t = '?';
            if(i%2==1){
                t = '#';
            }
            else{
                t = '.';
            }
            rep(x, j-i+1){
                rep(y, j-i+1){
                    S.at(i+x-1).at(i+y-1) = t;
                }
            }
        }
        else{
            break;
        }
    }

    rep(i, N){
        rep(j, N){
            cout << S[i][j];
        }
        cout << endl;
    }
}
