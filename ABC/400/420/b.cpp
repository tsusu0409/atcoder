#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N, M; cin >> N >> M;
    vector<string> S(N);
    rep(i, N) cin >> S[i];

    vector<int> ans(N, 0);

    rep(i, M){
        int cnt0 = 0;
        int cnt1 = 0;
        rep(j, N){
            if(S[j][i]=='1') cnt1++;
            else cnt0++;
        }

        if(cnt1==0 || cnt0==0){
            rep(j, N) ans[j]++;
            continue;
        }
        if(cnt0<cnt1){
            rep(j, N){
                if(S[j][i]=='0') ans[j]++;
                continue;
            }
        }
        if(cnt1<cnt0){
            rep(j, N){
                if(S[j][i]=='1') ans[j]++;
                continue;
            }
        }
    }

    int maxNum = 0;
    rep(i, N){
        maxNum = max(maxNum, ans[i]);
    }

    rep(i, N){
        if(maxNum == ans[i]){
            cout << i + 1;
            cout << " ";
        }
    }
    cout << endl;
}
