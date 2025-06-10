#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int m;
    cin >> m;
    if(m <= 100){
        cout << "00" << endl;
    }
    else if(m <= 5000){
        int m2 = m / 100;
        if(m2 < 10){
            cout << 0 << m2 << endl;
        }
        else{
            cout << m2 << endl;
        }
    }
    else if(m <= 30000){
        cout << m / 1000 + 50 << endl;
    }
    else if(m <= 70000){
        cout << (m-30) / 5 + 80 << endl;
    }
    else{
        cout << 89 << endl;
    }
}
