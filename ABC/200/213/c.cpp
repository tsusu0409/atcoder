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

    set<int> Hdata;
    set<int> Wdata;

    rep(i, N){
        Hdata.insert(A[i]-1);
        Wdata.insert(B[i]-1);
    }

    vector<int> cnt_remove_H(H, 0);
    vector<int> cnt_remove_W(W, 0);

    rep(i, H){
        if(i==0){
            if(!Hdata.count(i)) cnt_remove_H[i] = 1;
        }

        else{
            if(!Hdata.count(i)) cnt_remove_H[i] = cnt_remove_H[i-1] + 1;
            else cnt_remove_H[i] = cnt_remove_H[i-1];
        }
    }
    rep(i, W){
        if(i==0){
            if(!Wdata.count(i)) cnt_remove_W[i] = 1;
        }

        else{
            if(!Wdata.count(i)) cnt_remove_W[i] = cnt_remove_W[i-1] + 1;
            else cnt_remove_W[i] = cnt_remove_W[i-1];
        }
    }

    rep(i, N){
        int C = A[i] - 1;
        int D = B[i] - 1;

        int nowAnsC = C - cnt_remove_H[C] + 1;
        int nowAnsD = D - cnt_remove_W[D] + 1;
        cout << nowAnsC << ' ' << nowAnsD << endl;
    }
}
