#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N; cin >> N;
    vector<int> U(N);
    vector<int> D(N);
    vector<int> L(N);
    vector<int> R(N);
    rep(i, N) cin >> U[i] >> D[i] >> L[i] >> R[i];

    vector<vector<int>> diff(2010, vector<int>(2010, 0));
    rep(i, N){
        diff[U[i]][L[i]] ++;
        diff[U[i]][R[i]+1] --;
        diff[D[i]+1][L[i]] --;
        diff[D[i]+1][R[i]+1] ++;
    }

    vector<vector<int>> cover(2010, vector<int>(2010, 0));
    rep(r, 2001){
        rep(c, 2001){
            int v = diff[r][c];

            if(r>0) v += cover[r-1][c];
            if(c>0) v += cover[r][c-1];
            if(r>0 && c>0) v -= cover[r-1][c-1];
            cover[r][c] = v;
        }
    }

    int base=0;
    rep(r, 2001){
        if(r==0) continue;
        rep(c, 2001){
            if(c==0) continue;

            if(cover[r][c]=0) base++;
        }
    }
    vector<int> ans(N, base);

    
}
