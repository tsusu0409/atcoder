#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int T; cin >> T;
    int N; cin >> N;
    vector<int> inOut(T+1, 0);
    rep(i, N){
        int L, R; cin >> L >> R;
        inOut[L] ++;
        inOut[R] --;
    }

    int active = 0;
    rep(i, T){
        active += inOut[i];
        cout << active << endl;
    }
}
