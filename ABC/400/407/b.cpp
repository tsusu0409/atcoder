#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int X, Y; cin >> X >> Y;

    double p = 0;
    rep(i, 6){
        rep(j, 6){
            if((i+1)+(j+1)>=X){
                p++;
            }
            else if(abs(i-j)>=Y){
                p++;
            }
        }
    }

    cout << fixed << setprecision(10);
    cout << p / 36 << endl;
}
