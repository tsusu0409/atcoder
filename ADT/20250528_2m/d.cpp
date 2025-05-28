#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int H, W; cin >> H >> W;
    vector<string> A(H);
    vector<string> B(H);
    rep(i, H){
        cin >> A[i];
    }
    rep(i, H){
        cin >> B[i];
    }

    bool ans = 0;
    rep(nH, H){
        rep(nW, W){
            bool check = 1;
            rep(k, H){
                rep(l, W){
                    int checkH = nH +k;
                    int checkW = nW + l;
                    if(checkH >= H) checkH -= H;
                    if(checkW >= W) checkW -= W;

                    if(A[checkH][checkW] != B[k][l]) check = 0;
                }
            }
            if(check) ans = 1;
        }
    }

    if(ans) cout << "Yes" << endl;
    else cout << "No" << endl;
}
