#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N; cin >> N;
    vector<string> S(N);
    rep(i, N){
        cin >> S[i];
    }

    int ans = 0;
    bool log = 0;

    rep(i, N){
        if(!log){
            if(S[i]=="private"){
                ans ++;
            }
        }
        if(S[i]=="login"){
            log = 1;
        }
        if(S[i]=="logout"){
            log = 0;
        }
    }

    cout << ans << endl;
}
