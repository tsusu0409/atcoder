#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N; cin >> N;
    vector<int> A(N); rep(i, N) cin >> A[i];
    vector<int> W(N); rep(i, N) cin >> W[i];

    vector<int> min_w(N, 0);
    vector<int> num(N, 0);
    ll sum = 0;
    rep(i, N){
        A[i] --;
        min_w[A[i]] = max(W[i], min_w[A[i]]);
        num[A[i]] ++;
        sum += W[i];
    }
    
    ll remain_sum = 0;
    rep(i, N){
        remain_sum += min_w[i];
    }

    cout << sum - remain_sum << endl;
}