#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    string S; cin >> S;
    char c1 = S[0];
    char c2 = '0';
    int n = S.size();

    int cnt1 = 0;
    int cnt2 = 0;
    rep(i, n){
        if(S[i]==c1) cnt1++;
        else{
            c2 = S[i];
            cnt2++;
        }
    }

    if(cnt1==1) cout << c1 << endl;
    else cout << c2 << endl;
}
