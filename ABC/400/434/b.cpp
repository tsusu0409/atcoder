#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N, M; cin >> N >> M;
    vector<int> A(N);
    vector<int> B(N);
    rep(i, N) cin >> A[i] >> B[i];

    rep(i, M){
        double cnt = 0;
        double sum = 0;
        rep(j, N){
            if(A[j]==i+1){
                cnt += 1;
                sum += B[j];
            }
        }
        
        double ans = sum / cnt;
        cout << fixed << setprecision(10);
        cout << ans << endl;
    }
}
