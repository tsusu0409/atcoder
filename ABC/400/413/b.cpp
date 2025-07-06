#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N; cin >> N;
    vector<string> S(N);
    rep(i, N) cin >> S[i];

    set<string> ans;
    rep(i, N){
        rep(j, N){
            if(i==j) continue;
            ans.insert(S[i]+S[j]);
        }
    }

    cout << ans.size() << endl;
}
