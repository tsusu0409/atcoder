#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N; cin >> N;
    vector<int> A(N+1);
    rep(i, N) cin >> A[i+1];

    int reach = A[1];
    
    for(int i=1; i<=reach && i<=N; i++){
        reach = max(reach, i+A[i]-1);
        if(reach>=N){
            reach = N;
            break;
        }
    }

    cout << reach << endl;
}

