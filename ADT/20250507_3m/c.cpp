#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    string S1, S2, S3; cin >> S1 >> S2 >> S3;
    string T; cin >> T;
    
    rep(i, T.size()){
        if(T[i]=='1'){
            cout << S1;
        }
        if(T[i]=='2'){
            cout << S2;
        }
        if(T[i]=='3'){
            cout << S3;
        }
    }
    cout << endl;
}