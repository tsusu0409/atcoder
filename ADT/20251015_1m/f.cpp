#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N; cin >> N;
    string S; cin >> S;
    vector<int> W(N);
    rep(i, N) cin >> W[i];

    int chiMax = 0;
    int aduMin = 2e9;

    rep(i, N){
        if(S[i]=='0'){
            chiMax = max(chiMax, W[i]);
        }
        else{
            aduMin = min(aduMin, W[i]);
        }
    }

    int cntAduNG = 0;
    int cntChiNG = 0;
    rep(i, N){
        if(S[i]=='0' && W[i]>aduMin) cntChiNG++;
        if(S[i]=='1' && W[i]<chiMax) cntAduNG++;
    }

    cout << N - min(cntChiNG, cntAduNG) << endl;
}
