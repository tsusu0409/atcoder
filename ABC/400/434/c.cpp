#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int T; cin >> T;
    rep(c, T){
        int N, H; cin >> N >> H;
        vector<int> t(N);
        vector<int> l(N);
        vector<int> u(N);
        rep(i, N) cin >> t[i] >> l[i] >> u[i];

        int can_l = H;
        int can_u = H;
        bool ans = 1;
        rep(i, N){
            int time = 0;
            if(i==0) time = t[i];
            else time = t[i] - t[i-1];

            can_l -= time;
            can_u += time;

            if(can_l > u[i] || can_u < l[i]){
                ans = 0;
                break;
            }
            can_l = max(can_l, l[i]);
            can_u = min(can_u, u[i]);
        }

        if(ans) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}
