#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int getDigit(ll num){
    int digit = 0;
    while(num!=0){
        num /= 10;
        digit ++;
    }
    return digit;
}

int main() {
    int T; cin >> T;
    rep(t, T){
        ll ans = 0;
        ll C, D; cin >> C >> D;
        int digit_C = getDigit(C);
        int digit_D = getDigit(D);

        int digit_max = digit_D;
        if(digit_C > digit_D) digit_max = digit_C;

        for(int i=digit_C; i<=digit_max; i++){
            ll nuMin = 0;
            nuMin += C * pow(10, i);
            nuMin += C;
            ll nuMax = nuMin + D;

            ll min_SQ = sqrt(nuMin);
            ll max_SQ = sqrt(nuMax);

            ans += max_SQ - min_SQ + 1;
        }
        cout << ans << endl;
    }
}
