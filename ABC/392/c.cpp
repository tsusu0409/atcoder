#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N;
    cin >> N;
    vector<int> P(N);
    vector<int> Q(N);
    rep(i, N){
        cin >> P[i];
    }
    rep(i, N){
        cin >> Q[i];
    }
    
    map<int, int> look;
    rep(i, N){
        look[Q[i]] = P[i];
    }

    rep(i, N-1){
        cout << Q[look[i+1]-1] << " ";
    }
    cout << Q[look[N]-1] << endl;
}
