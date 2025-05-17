#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N; cin >> N;
    vector<int> P(N);
    rep(i, N){
        cin >> P[i];
    }

    vector<int> yama = {};
    vector<int> tani = {};
    for(int i=1; i<N-1; i++){
        if(P[i-1] < P[i] && P[i] > P[i+1]){
            yama.push_back(i);
        }
        if(P[i-1] > P[i] && P[i] < P[i+1]){
            tani.push_back(i);
        }
    }

    ll ans = 0;
    int yamaSize = yama.size();
    int taniSize = tani.size();

    rep(i, yamaSize){
        rep(j, taniSize){
            if(yama[i] < tani[j]){
                ans ++;
            }
        }
    }

    cout << ans << endl;
}
