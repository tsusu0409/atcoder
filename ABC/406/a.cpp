#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int A, B, C, D; cin >> A >> B >> C >> D;
    
    if(A>C){
        cout << "Yes" << endl;
        return 0;
    }
    else if(A==C){
        if(B>D){
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
        return 0;
    }
    else {
        cout << "No" << endl;
    }
}
