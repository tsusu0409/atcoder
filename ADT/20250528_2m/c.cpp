#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int H, W; cin >> H >> W;
    vector<vector<int>> A(H, vector<int>(W)); 
    rep(i, H){
        rep(j, W){
            cin >> A[i][j];
        }
    }

    string ansData = ".ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    rep(i, H){
        rep(j, W){
            cout << ansData[A[i][j]];
        }
        cout << endl;
    }
}
