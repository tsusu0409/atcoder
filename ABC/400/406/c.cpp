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

    vector<bool> check3(N, 0);
    vector<bool> check4(N, 0);
    for(int i=1; i<N-1; i++){
        if(P[i-1] < P[i] && P[i] > P[i+1]){
            check3[i] = 1;
        }
        if(P[i-1] > P[i] && P[i] < P[i+1]){
            check4[i] = 1;
        }
    }

    vector<int> check3Sum(N, 0);
    vector<int> check4Sum(N, 0);

    rep(i, N){
        if(i==0){
            check3Sum[0] = check3[0];
            check4Sum[0] = check4[0];
        }
        else{
            if(check3[i]==1){
                check3Sum[i] = check3Sum[i-1] + 1;
            }
            else {
                check3Sum[i] = check3Sum[i-1];
            }
            if(check4[i]==1){
                check4Sum[i] = check4Sum[i-1] + 1;
            }
            else {
                check4Sum[i] = check4Sum[i-1];
            }
        }
    }

    ll ans = 0;
    for(int a = 4; a <= N; a++){ // 何個カウントするか
        for(int i=0; i<N-a+1; i++){ // 数列のスタート位置
            if(P[i] >= P[i+1]){
                continue;
            }
            if(check3Sum[i+a-2] - check3Sum[i] != 1){
                continue;
            }
            if(check4Sum[i+a-2] - check4Sum[i] != 1){
                continue;
            }
            ans ++;
        }
    }

    cout << ans << endl;
}
