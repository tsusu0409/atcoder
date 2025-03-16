#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N; cin >> N;
    string S; cin >> S;

    vector<int> sumE(N, 0);
    vector<int> sumW(N, 0);
    rep(i, N){
        if(i==0){
            if(S[i] == 'E'){
                sumE[i] = 1;
            }
            else{
                sumW[i] = 1;
            }
        }
        else{
            if(S[i] == 'E'){
                sumE[i] = sumE[i-1] + 1;
                sumW[i] = sumW[i-1];
            }
            else{
                sumE[i] = sumE[i-1];
                sumW[i] = sumW[i-1] + 1;
            }
        }
    }

    int ans = 300000;
    rep(i, N){
        int tmp = 0;
        if(i==0){
            tmp += sumE[N-1] - sumE[0];
        }
        else if(i==N-1){
            tmp += sumW[N-2];
        }
        else{
            tmp += (sumW[i-1]) + (sumE[N-1] - sumE[i]);
        }
        ans = min(tmp, ans);
    }

    cout << ans << endl;
}