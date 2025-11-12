#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int X; cin >> X;

    int X1 = X/1000; X%=1000;
    int X2 = X/100; X%=100;
    int X3 = X/10; X%=10;
    int X4 = X;

    bool weak = 0;

    if(X1==X2 && X1==X3 && X1==X4) weak=1;

    if(((X1+1)%10==X2) && ((X2+1)%10==X3) && ((X3+1)%10==X4)) weak=1;

    if(weak) cout << "Weak" << endl;
    else cout << "Strong" << endl;
}
