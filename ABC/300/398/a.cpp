#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N; cin >> N;
    int check = N % 2;

    if(check){
        rep(i, ((N-1)/2)){
            cout << '-';
        }
        cout << '=';
        rep(i, (N-1)/2){
            cout << '-';
        }
        cout << endl;
    }

    else{
        rep(i, (N/2)-1){
            cout << '-';
        }
        cout << "==";
        rep(i, (N/2)-1){
            cout << '-';
        }
        cout << endl;
    }
}