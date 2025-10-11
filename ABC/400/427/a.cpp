#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    string S; cin >> S;
    int n = S.size();
    int center = (n+1)/2 - 1;
    
    rep(i, center) cout << S[i];
    for(int i=center+1; i<n; i++) cout << S[i];
    cout << endl;
}
