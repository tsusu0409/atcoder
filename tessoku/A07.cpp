#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int D, N; cin >> D >> N;
    vector<int> data(D, 0);
    rep(i, N){
        int L, R; cin >> L >> R;
        data[L-1] ++;
        if(R!=D){
            data[R] --;
        }
    }

    int ans = 0;
    rep(i, D){
        if(i==0){
            ans = data[i];
        }
        else{
            ans += data[i];
        }
        cout << ans << endl;
    }
}
