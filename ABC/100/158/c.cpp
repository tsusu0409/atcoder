#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int A, B; cin >> A >> B;
    
    rep(i, 10000){
        int xA = i * 8 / 100;
        int xB = i * 10 / 100;
        if(A==xA && B==xB){
            cout << i << endl;
            return 0;
        }
    }

    cout << -1 << endl;
}
