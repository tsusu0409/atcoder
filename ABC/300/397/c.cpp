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
    rep(i, N){
        cin >> A[i];
    }

    vector<int> sumL(N);
    vector<int> sumR(N);

    map<int, int> numL = {};
    map<int, int> numR = {};

    rep(i, N){
        numL[A[i]] ++;
        sumL[i] = numL.size();
    }
    rep(i, N){
        numR[A[N-1-i]] ++;
        sumR[N-1-i] = numR.size();
    }

    int ans = 0;
    rep(i, N-1){
        int tmp = sumL[i] + sumR[i+1];
        ans = max(ans, tmp);
    }

    cout << ans << endl;
}
