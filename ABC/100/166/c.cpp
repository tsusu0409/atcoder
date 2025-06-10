#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N, M; cin >> N >> M;
    vector<int> H(N);
    rep(i, N){
        cin >> H[i];
    }
    int ans = 0;
    map<int, int> num;
    rep(i, M){
        int A, B; cin >> A >> B;
        if(H[A-1] > H[B-1]){
            num[B-1] ++;
        }
        else if(H[A-1] == H[B-1]){
            num[A-1] ++;
            num[B-1] ++;
        }
        else{
            num[A-1] ++;
        }
    }

    rep(i, N){
        if(num[i] == 0){
            ans ++;
        }
    }

    cout << ans << endl;
}
