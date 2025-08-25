#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N, M; cin >> N >> M;
    string S; cin >> S;
    string T; cin >> T;
    vector<int> L(M);
    vector<int> R(M);
    rep(i, M){
        cin >> L[i] >> R[i];
    }

    const int maxN = 1e6;

    bitset<maxN> Sdata;
    Sdata.set();

    rep(i, M){
        int r = R[i] - 1;
        int l = L[i] - 1;

        unsigned long long mask = ((1ULL << (r - l + 1)) - 1) << l;

        Sdata ^= bitset<maxN>(mask);
    }

    rep(i, N){
        if(Sdata.test(i)){
            cout << S[i];
        }
        else {
            cout << T[i];
        }
    }

    cout << endl;
}
