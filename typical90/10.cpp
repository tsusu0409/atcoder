#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using P = pair<int,int>;

int main() {
    int N; cin >> N;
    vector<int> sum1(N, 0);
    vector<int> sum2(N, 0);
    rep(i, N){
        int c, p; cin >> c >> p;
        if(i==0){
            if(c==1){
                sum1[i] = p;
            }
            else{
                sum2[i] = p;
            }
        }
        else if(c==1){
            sum1[i] = sum1[i-1] + p;
            sum2[i] = sum2[i-1];
        }
        else{
            sum1[i] = sum1[i-1];
            sum2[i] = sum2[i-1] + p;
        }
    }

    int Q; cin >> Q;
    rep(i, Q){
        int L, R; cin >> L >> R;
        L-=2;
        R--;
        cout << sum1[R] - sum1[L] << " " << sum2[R] - sum2[L] << endl;
    }
}
