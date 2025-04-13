#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N, K; cin >> N >> K;
    int ans = 0;

    for(int a = 1; a < N+1; a++){
        for(int b = 1; b < N+1; b++){
            int c = K - a - b;
            if(1<=c && c<= N){
                ans ++;
            }
        }
    }

    cout << ans << endl;
}
