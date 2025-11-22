#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N; cin >> N;
    vector<int> A(N);
    rep(i, N) cin >> A[i];

    rep(i, N){
        if(i==0){
            cout << -1 << endl;
            continue;
        }

        int max_itr = -1;
        rep(j, i){
            if(A[i]<A[j]){
                max_itr = j+1;
            }
        }

        cout << max_itr << endl;
    }
}
