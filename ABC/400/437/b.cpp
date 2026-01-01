#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int H, W, N; cin >> H >> W >> N;
    vector<vector<int>> A(H, vector<int>(W));
    rep(i, H) rep(j, W) cin >> A[i][j];

    vector<int> cnt(H, 0);

    rep(i, N){
        int B; cin >> B;
        rep(j, H){
            rep(k, W){
                if(A[j][k]==B){
                    cnt[j] ++;
                }
            }
        }
    }

    int ans = 0;
    rep(i, H){
        ans = max(cnt[i], ans);
    }
    cout << ans << endl;
}
