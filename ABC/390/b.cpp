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
    int ans = 1;
    double r = A.at(1) / A.at(0);
    rep(i, N-1){  
        double nowR = A.at(i+1) / A.at(i);
        if(r != nowR){
            ans = 0;
            break;
        }
    }
    
    if(ans){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}
