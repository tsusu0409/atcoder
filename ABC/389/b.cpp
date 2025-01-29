#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    ll X;
    cin >> X;
    int roop = 1;
    int N = 1;
    while(roop){
        ll s = 1;
        rep(i,N){
            s *= (i+1);
        }
        if(s == X){
            break;
        }
        else{
            N ++;
        }
    }
    cout << N << endl;
}
