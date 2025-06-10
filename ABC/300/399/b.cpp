#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N; cin >> N;
    vector<int> P(N);
    vector<int> P2(N);
    rep(i, N){
        cin >> P[i];
        P2[i] = P[i];
    }

    sort(P.rbegin(), P.rend());
    vector<int> rank(N);

    int now = P[0];
    int a = 1;
    rank[0] = a;
    int k = 1;
    for(int i = 1; i < N; i ++){
        if(P[i] == now){
            rank[i] = a;
            k ++;
        }
        else{
            a += k;
            rank[i] = a;
            k = 1;
        }
    }

    rep(i, N){
        rep(j, N){
            if(P2[i] == P[j]){
                cout << rank[j] << endl;
                break;
            }
        }
    }
}
