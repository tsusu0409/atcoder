#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int H, W; cin >> H >> W;
    if(H==1 && W==1){
        cout << 0 << endl;
        return 0;
    }
    else if(H==1){
        cout << 1 << ' ';
        rep(i, W-2) cout << 2 << ' ';
        cout << 1 << endl;
        return 0;
    }
    else if(W==1){
        cout << 1 << endl;
        rep(i, H-2) cout << 2 << endl;
        cout << 1 << endl;
        return 0;
    }


    rep(i, H) rep(j, W){
        if(i==0 && j==0){
            cout << 2;
        }
        else if(i==0 && j==W-1){
            cout << 2;
        }
        else if(i==H-1 && j==0){
            cout << 2;
        }
        else if(i==H-1 && j==W-1){
            cout << 2;
        }
        else if(i==0 || i==H-1 || j==0 || j==W-1){
            cout << 3;
        }
        else{
            cout << 4;
        }

        if(j!=W-1) cout << ' ';
        else cout << endl;
    }
}
