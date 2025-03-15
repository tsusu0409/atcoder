#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    double X; cin >> X;

    if(X>=38){
        cout << 1 << endl;
    }
    else if(X>=37.5){
        cout << 2 << endl;
    }
    else{
        cout << 3 << endl;
    }
}
