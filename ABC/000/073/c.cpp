#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N;
    cin >> N;
    vector<ll> A(N);
    rep(i, N){
        cin >> A[i];
    }
    map<int, int> num;
    rep(i, N){
        num[A[i]] ++;
    }
    int ans = 0;
    for(auto i: num){
        if(i.second % 2 == 1){
            ans ++;
        }
    }
    cout << ans << endl;
}
