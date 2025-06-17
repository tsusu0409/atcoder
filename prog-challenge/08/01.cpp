#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N; cin >> N;
    vector<int> A(N);
    rep(i, N) cin >> A[i];

    vector<int> mom(N, 1);
    vector<int> sis(N, 1);

    rep(i, N){
        if(i==0) continue;

        mom[i] = mom[i-1] * A[i-1];
        sis[i] = sis[i-1] * A[i];

        int nowMom = mom[i];
        int nowSis = sis[i];

        int waru = 2;
        while(waru <= max(mom[i], sis[i])){
            if(nowMom%waru==0 && nowSis%waru==0){
                nowMom /= waru;
                nowSis /= waru;
            }
            else waru++;
        }

        mom[i] = nowMom;
        sis[i] = nowSis;

        cout << nowMom << '/' << nowSis << endl;
    }
}
