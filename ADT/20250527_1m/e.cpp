#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    vector<int> dx(4);
    vector<int> dy(4);

    dx = {-1, -1, 1, 1};
    dy = {1, -1, -1, 1};

    int H, W; cin >> H >> W;
    vector<string> C(H);
    rep(i, H){
        cin >> C[i];
    }

    int N = min(H, W);

    rep(i, N){
        int ans = 0;
        rep(j, H){
            rep(k, W){
                if(C[j][k] == '#'){
                    bool check = 1;
                    rep(l, i+1){
                        rep(m, 4){
                            int nj = j + (l+1)*dx[m];
                            int nk = k + (l+1)*dy[m];
                            if(nj<0 || nk<0 || nj>=H || nk>=W) check = 0;
                            if(C[nj][nk] != '#') check = 0;
                        }
                    }
                    if(check) ans ++;
                }
            }
        }
        cout << ans;
        if(i!=N-1) cout << ' ';
        else cout << endl;
    }
}
