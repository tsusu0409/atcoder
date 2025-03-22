#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N, K; cin >> N >> K;
    vector<int> p(N);
    rep(i, N){
        cin >> p[i];
    }
    vector<double> exp(N, 0);
    rep(i, N){
        exp[i] = (1 + p[i]) / 2;
    }
    vector<double> s(N);
    rep(i, N){
        if(i==0){
            s[i] = exp[i];
        }
        else{
            s[i] = s[i-1] + exp[i];
        }
    }

    double ans = 0;
    rep(i, N-K+1){
        double tmp = 0;
        if(i==0){
            tmp += s[K-1];
        }
        else{
            tmp += s[i+K-1] - s[i-1];
        }
        ans = max(tmp, ans);
    }

    cout << ans << endl;
}