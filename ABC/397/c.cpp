#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using P = pair<int,int>;

int main() {
    int N; cin >> N;
    vector<int> A(N);
    map<int, int> data = {};
    rep(i, N){
        cin >> A[i];
        data[A[i]] ++;
    }

    vector<int> S(N+1, 0);
    rep(i, N){
        S[i+1] = S[i] + A[i];
    }

    int ans = 0;
    rep(i, N-1){
        int x = S[]
    }
}
