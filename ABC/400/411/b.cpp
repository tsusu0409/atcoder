#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N; cin >> N;
    vector<int> D(N-1);
    rep(i, N-1) cin >> D[i];

    vector<int> baseD(N, 0);
    rep(i, N){
        if(i==0) baseD[i] = 0;
        else baseD[i] = baseD[i-1] + D[i-1];
    }

    rep(i, N){
        rep(j, N){
            if(i>=j) continue;
            cout << abs(baseD[i]-baseD[j]) << ' ';
        }
        cout << endl;
    }
}
