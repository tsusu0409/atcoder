#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    string S; cin >> S;
    int n = S.size();
    ll ans = 0;
    rep(i, n){
        if(S[i]!='C') continue;

        int left = i;
        int right = n - i - 1;

        ans += min(left+1, right+1);
    }
    cout << ans << endl;
}
