#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N, M; cin >> N >> M;
    map<int, int> Ldata;
    map<int, int> Rdata;
    rep(i, M){
        int l, r; cin >> l >> r;
        Ldata[l-1] ++;
        Rdata[r-1] ++;
    }

    vector<int> Lsum(N, 0);
    vector<int> Rsum(N, 0);

    rep(i, N){
        if(i==0){
            Lsum[i] += Ldata[i];
            Rsum[i] += Rdata[i];
        }
        else{
            Lsum[i] += Lsum[i-1] + Ldata[i];
            Rsum[i] += Rsum[i-1] + Rdata[i];
        }
    }

    int ans = M+1;
    rep(i, N){
        int tmp;
        if(i==0){
            tmp = Lsum[i];
        }
        else{
            tmp = Lsum[i] - Rsum[i-1];
        }
        ans = min(ans, tmp);
    }

    cout << ans << endl;
}
