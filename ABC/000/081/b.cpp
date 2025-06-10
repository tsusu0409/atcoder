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
    vector<int> A(N);
    rep(i, N){
        cin >> A.at(i);
    }
    int ans = 0;
    int s = 1;
    while(s){
        rep(i, N){
            if(A.at(i) % 2 == 0){
                A.at(i) /= 2;
            }
            else{
                s = 0;
            }
        }
        if(s == 1){
            ans ++;
        }
        else{
            break;
        }
    }
    cout << ans << endl;
}
