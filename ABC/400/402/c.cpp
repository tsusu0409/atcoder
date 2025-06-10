#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N, M; cin >> N >> M;
    vector<int> K(M);
    vector<set<int>> A(M);
    vector<vector<int>> contain(N);
    //i番目の食材をj番目の料理が含む
    //食材は1~N、料理は0~N-1

    rep(i, M){
        cin >> K[i];
        rep(j, K[i]){
            int a; cin >> a;
            A[i].insert(a);
            contain[a].push_back(i);
        }
    }

    int ans = 0;
    rep(i, N){
        int b; cin >> b;

        rep(j, contain[b].size()){
            int dish = contain[b][j];
            dish ++;
            K[dish] --;
            if(K[dish] == 0){
                ans++;
            }
        }

        cout << ans << endl;
    }
}
