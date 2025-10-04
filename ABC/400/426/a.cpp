#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    string X, Y;
    cin >> X >> Y;
    if(X=="Ocelot"){
        if(Y=="Ocelot") cout << "Yes" << endl;
        else cout << "No" << endl;
        return 0;
    }
    if(X=="Serval"){
        if(Y=="Ocelot" || Y=="Serval") cout << "Yes" << endl;
        else cout << "No" << endl;
        return 0;
    }
    if(X=="Lynx") cout << "Yes" << endl;
}
