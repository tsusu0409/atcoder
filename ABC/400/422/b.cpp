#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int H, W; cin >> H >> W;
    vector<string> S(H);
    rep(i, H) cin >> S[i];

    bool ans = 1;
    rep(i, H){
        rep(j, W){
            if(S[i][j]=='#'){
                int cnt = 0;
                if(i!=0){
                    if(S[i-1][j]=='#') cnt++;
                }
                if(i!=H-1){
                    if(S[i+1][j]=='#') cnt++;
                }
                if(j!=0){
                    if(S[i][j-1]=='#') cnt++;
                }
                if(j!=W-1){
                    if(S[i][j+1]=='#') cnt++;
                }

                if(cnt!=2 && cnt!=4){
                    ans = 0;
                    break;
                }
            }
        }
    }

    if(ans) cout << "Yes" << endl;
    else cout << "No" << endl;
}
