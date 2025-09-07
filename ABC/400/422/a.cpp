#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    string S; cin >> S;
    int w = S[0] - '0';
    int s = S[2] - '0';

    if(s==8){
        w++;
        s=1;
    }
    else{
        s++;
    }

    cout << w << '-' << s << endl;
}
