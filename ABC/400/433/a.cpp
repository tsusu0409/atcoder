#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int X, Y, Z; cin >> X >> Y >> Z;
    if(X<=Y){
        cout << "No" << endl;
        return 0;
    }

    while(X/Y >= Z){
        if(X/Y == Z && X%Y == 0){
            cout << "Yes" << endl;
            return 0;
        }

        X ++;
        Y ++;
    }

    cout << "No" << endl;
}
