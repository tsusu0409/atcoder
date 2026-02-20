#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N; cin >> N;
    vector<int> A(1<<N);
    rep(i, 1<<N) cin >> A[i];

    int best1 = 0;
    int best2 = 0;
    rep(i, 1<<(N-1)){
        best1 = max(best1, A[i]);
        best2 = max(best2, A[i+(1<<(N-1))]);
    }

    int ansScore = min(best1, best2);
    rep(i, 1<<N){
        if(A[i]==ansScore){
            cout << i+1 << endl;
        }
    }
}
