#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N, A, B; cin >> N >> A >> B;
    string S; cin >> S;

    vector<int> Asum(N, 0);
    vector<int> Bsum(N, 0);

    if(S[0]=='a') Asum[0] = 1;
    else Bsum[0] = 1;

    rep(i, N){
        if(i==0) continue;
        
        if(S[i]=='a'){
            Asum[i] = Asum[i-1] + 1;
            Bsum[i] = Bsum[i-1];
        }
        else{
            Asum[i] = Asum[i-1];
            Bsum[i] = Bsum[i-1] + 1;
        }
    }

    int ans = 0;
    rep(l, N){
        for(int r=l; r<N; r++){
            int cntA = 0;
            int cntB = 0;
            if(l==0){
                cntA = Asum[r];
                cntB = Bsum[r];
            }
            else{
                cntA = Asum[r] - Asum[l-1];
                cntB = Bsum[r] - Bsum[l-1];
            }

            if(cntA>=A && cntB<B) ans++;
        }
    }

    cout << ans << endl;
}
