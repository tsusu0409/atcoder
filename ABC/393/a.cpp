#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    string St, Sa;
    cin >> St >> Sa;

    if(St=="sick" && Sa=="sick"){
        cout << 1 << endl;
    }
    else if(St=="sick"){
        cout << 2 << endl;
    }
    else if(Sa=="sick"){
        cout << 3 << endl;
    }
    else{
        cout << 4 << endl;
    }
}
