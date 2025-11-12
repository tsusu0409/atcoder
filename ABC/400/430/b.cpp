#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N, M; cin >> N >> M;
    vector<string> S(N);
    rep(i, N) cin >> S[i];
    
    set<string> data;

    rep(i, N){
        rep(j, N){
            if(i+M-1>N-1 || j+M-1>N-1) continue;

            string now = "";
            rep(k, M){
                rep(l, M){
                    now.push_back(S[i+k][j+l]);
                }
            }

            data.insert(now);
        }
    }

    cout << data.size() << endl;
}
