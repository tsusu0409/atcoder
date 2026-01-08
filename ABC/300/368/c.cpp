#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N; cin >> N;
    vector<int> H(N);
    rep(i, N) cin >> H[i];

    ll ans = 0;

    rep(i, N){
        if(H[i]>=5){
            ans += (H[i] / 5) * 3;
            H[i] %= 5;
        }

        rep(j, 3){
            if(H[i]<=0){
                break;
            }

            if((ans + 1) % 3 == 0){
                H[i] -= 3;
                ans ++;
            }
            else{
                H[i] --;
                ans ++;
            }
        }
    }
    cout << ans << endl;
}