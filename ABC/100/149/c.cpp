#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int X; cin >> X;
    while(1){
        bool prime = 1;
        for(int i=2; i<X; i++){
            if(X%i == 0){
                prime = 0;
                break;
            }
        }

        if(prime){
            cout << X << endl;
            return 0;
        }
        else{
            X++;
        }
    }
}
