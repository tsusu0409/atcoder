#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int H, W, N; cin >> H >> W >> N;
    vector<int> A(N);
    vector<int> B(N);
    rep(i, N) cin >> A[i] >> B[i];

    vector<int> Asorted(N);
    vector<int> Bsorted(N);

    rep(i, N){
        Asorted[i] = A[i];
        Bsorted[i] = B[i];
    }
    sort(Asorted.begin(), Asorted.end());
    sort(Bsorted.begin(), Bsorted.end());

    map<int, int> Arank;
    map<int, int> Brank;

    int a = Asorted[0];
    int nowArank = 1;
    rep(i, N){
        if(a!=Asorted[i]) nowArank++;
        Arank[Asorted[i]] = nowArank;
        a = Asorted[i];
    }

    int b = Bsorted[0];
    int nowBrank = 1;
    rep(i, N){
        if(b!=Bsorted[i]) nowBrank++;
        Brank[Bsorted[i]] = nowBrank;
        b = Bsorted[i];
    }

    rep(i, N){
        cout << Arank[A[i]] << ' ' << Brank[B[i]] << endl;
    }
}