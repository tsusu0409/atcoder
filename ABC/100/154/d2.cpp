#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N, K; cin >> N >> K;
    vector<int> p(N);
    rep(i, N) cin >> p[i];

    vector<double> exp(N);
    rep(i, N){
        double p_now = p[i];
        exp[i] = (1 + p_now) / 2;
    }

    vector<double> exp_sum(N);
    rep(i, N){
        if(i==0) exp_sum[i] = exp[i];
        else exp_sum[i] = exp_sum[i-1] + exp[i];
    }

    double ans = 0;
    rep(i, N){
        int b = i;
        int e = i + K - 1;

        double now;
        if(b==0) now = exp_sum[e];
        else now = exp_sum[e] - exp_sum[b-1];

        ans = max(ans, now);
    }

    cout << fixed << setprecision(10);
    cout << ans << endl;
}