#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> A(N);
    rep(i, N){
        cin >> A[i];
    }

    vector<int> num(N);
    rep(i, N){
        num[A[i]-1] ++;
    }
    
    int s = num.size();
    if(s <= K){
        cout << 0 << endl;
    }
    else{
        sort(num.begin(), num.end());
        int ans = 0;
        rep(i, s-K){
            ans += num[i];
        }
        cout << ans << endl;
    }
}
