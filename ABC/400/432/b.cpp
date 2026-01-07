#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    string X; cin >> X;
    int n = X.size();

    sort(X.begin(), X.end());

    rep(i, n){
        if(X[i]!='0'){
            swap(X[i], X[0]);
            break;
        }
    }

    cout << X << endl;
}