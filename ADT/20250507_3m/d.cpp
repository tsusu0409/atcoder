#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int A[59][59];

int main() {
    int H, W; cin >> H >> W;
    rep(i, H){
        rep(j, W){
            cin >> A[i][j];
        }
    }

    bool ans = 1;
    rep(i1, H){
        rep(i2, H){
            rep(j1, W){
                rep(j2, W){
                    if(i1>=i2 || j1>=j2) continue;
                    if(A[i1][j1]+A[i2][j2] > A[i2][j1]+A[i1][j2]) ans = 0;
                }
            }
        }
    }

    if(ans){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}