#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N; cin >> N;
    vector<int> A(N);
    vector<int> B(N);
    rep(i, N-1){
        cin >> A[i+1];
    }
    rep(i, N-2){
        cin >> B[i+2];
    }

    vector<int> dp(N, 0);
    vector<vector<int>> dpRoot(N);
    dp[1] = A[1];
    dpRoot[1].push_back(1);
    dpRoot[1].push_back(2);
    for(int i = 2; i < N; i++){
        int cost1 = dp[i-1] + A[i];
        int cost2 = dp[i-2] + B[i];

        if(cost1<=cost2){
            // dpRootの更新
            for(auto j: dpRoot[i-1]){
                dpRoot[i].push_back(j);
            }
            dpRoot[i].push_back(i+1);
            // dpの更新
            dp[i] = cost1;
        }
        else{
            // dpRootの更新
            for(auto j: dpRoot[i-2]){
                dpRoot[i].push_back(j);
            }
            dpRoot[i].push_back(i+1);
            // dpの更新
            dp[i] = cost2;
        }
    }

    int size = dpRoot[N-1].size();
    cout << size << endl;
    rep(i, size){
        cout << dpRoot[N-1][i];
        if(i!=size-1){
            cout << ' ';
        }
        else{
            cout << endl;
        }
    }
}


// 自力で実装できたのは素晴らしいが、一般的な解き方ではないらしい
// あれか、配列のコピー毎度やると計算量がおしまいになるからこれではダメなのか