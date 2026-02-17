#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    string S; cin >> S;
    int n = S.size();
    if(S[n-1] == S[0]){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}
