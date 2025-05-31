#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N, S; cin >> N >> S;
    vector<int> T(N);
    vector<int> span(N);
    rep(i, N){
        cin >> T[i];
        if(i==0){
            span[i] = T[i];
        }
        else{
            span[i] = T[i] - T[i-1];
        }
    }

    bool ans = 1;
    rep(i, N){
        if(span[i] > S){
            ans = 0;
            break;
        }
    }

    if(ans) cout << "Yes" << endl;
    else cout << "No" << endl;
}
