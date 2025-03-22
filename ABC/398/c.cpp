#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N; cin >> N;
    vector<ll> A(N);
    map<ll, int> num;
    rep(i, N){
        cin >> A[i];
        num[A[i]] ++;
    }

    ll maxNum = 0;
    for(auto i:num){
        if(i.second == 1){
            maxNum = max(maxNum, i.first);
        }
    }

    int ans = -1;
    rep(i, N){
        if(A[i] == maxNum){
            ans = i+1;
        }
    }

    cout << ans << endl;
}