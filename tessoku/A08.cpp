#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int H, W; cin >> H >> W;
    vector<vector<int>> X(H, vector<int>(W));
    rep(i, H){
        rep(j, W){
            cin >> X[i][j];
        }
    }

    vector<vector<int>> sum1(H, vector<int>(W, 0));
    rep(i, H){
        rep(j, W){
            if(j==0){
                sum1[i][j] = X[i][j];
            }
            else{
                sum1[i][j] = sum1[i][j-1] + X[i][j];
            }
        }
    }
    vector<vector<int>> sum2(H, vector<int>(W, 0));
    rep(i, W){
        rep(j, H){
            if(j==0){
                sum2[j][i] = sum1[j][i];
            }
            else{
                sum2[j][i] = sum2[j][i-1] + sum1[j][i];
            }
        }
    }

    int Q; cin >> Q;
    rep(i, Q){
        int a, b, c, d; cin >> a >> b >> c >> d;
        a--; b--; c--; d--;
        int ans, S1, S2, S3, S4;

        S1 = sum2[c][d];
        if(a==0 && b==0){
            ans = S1;
        }
        else if(a==0){
            S2 = sum2[c][b-1];
            ans = S1 - S2;
        }
        else if(b==0){
            S3 = sum2[a-1][d];
            ans = S1 - S3;
        }
        else{
            S2 = sum2[c][b-1];
            S3 = sum2[a-1][d];
            S4 = sum2[a-1][b-1];
            ans = S1 - S2 - S3 + S4;
        }

        cout << ans << endl;
    }
}
