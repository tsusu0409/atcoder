#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

using mint = atcoder::modint998244353;

int main(){
    int N; cin >> N;
    vector<vector<int>> A(N, vector<int>(6));
    rep(i, N) rep(j, 6) cin >> A[i][j];



    // mintの使い方
    mint b = 5;
    mint a = 3;
    mint answer = b / a;
    
    cout << answer.val() << endl;
}
