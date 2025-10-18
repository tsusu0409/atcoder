#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N, K; cin >> N >> K;
    string S; cin >> S;

    int ans = 0;
    vector<set<string>> ansData(N+1);

    rep(i, N){
        if(i+K-1>=N) break;
        vector<char> base;
        base.clear();
        rep(j, K){
            base.push_back(S[i+j]);
        }

        int nowAns = 0;
        rep(j, N){
            if(j+K-1>=N) break;
            bool check = 1;
            rep(l, K){
                if(S[j+l]!=base[l]) check = 0;
            }
            if(check) nowAns++;
        }

        string nowSt = "";
        rep(i, K) nowSt.push_back(base[i]);

        ansData[nowAns].insert(nowSt);

        ans = max(nowAns, ans);
    }

    cout << ans << endl;
    
    for(auto v: ansData[ans]) cout << v << " ";
    cout << endl;
}
