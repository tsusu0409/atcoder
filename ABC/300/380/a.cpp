#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N; cin >> N;
    vector<int> c(6);
    c[0] = N / 100000;
    c[1] = (N / 10000) % 10;
    c[2] = (N / 1000) % 10;
    c[3] = (N / 100) % 10;
    c[4] = (N / 10) % 10;
    c[5] = N % 10;

    int s1 = 0;
    int s2 = 0;
    int s3 = 0;
    rep(i,6){
        if(c[i] == 1){
            s1 ++;
        }
        if(c[i] == 2){
            s2 ++;
        }
        if(c[i] == 3){
            s3 ++;
        }
    }

    bool ans = 1;
    if(s1 != 1){
        ans = 0;
    }
    if(s2 != 2){
        ans = 0;
    }
    if(s3 != 3){
        ans = 0;
    }

    if(ans){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}
