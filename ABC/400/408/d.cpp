#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int T; cin >> T;
    rep(t, T){
        int N; cin >> N;
        string S; cin >> S;

        // 余計な1をなくすver
        int max1 = 0;
        int checkMax = 0;
        int total1 = 0;
        bool check = 0;

        // 0を1に変えるver
        int inner0 = 0;
        int checkInner = 0;

        rep(i, m){
            if(check){
                if(S[i]=='1'){
                    check = 1;
                    total1 ++;
                    checkMax = 1;
                }
            }
            else{
                if(S[i]=='1'){
                    total1 ++;
                    checkMax ++;
                }
                else{
                    check = 0;
                    max1 = max(max1, checkMax);
                    checkMax = 0;
                }
            }
        }
    }
}
