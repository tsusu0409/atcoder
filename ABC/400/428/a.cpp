#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int S, A, B, X; cin >> S >>  A >> B >> X;
    int ans = 0;
    int roop =  X / (A+B);
    ans += roop * A * S;

    X -= roop * (A+B);

    if(X>A){
        ans += A * S;
    }
    else{
        ans += X * S;
    }

    cout << ans << endl;
}
