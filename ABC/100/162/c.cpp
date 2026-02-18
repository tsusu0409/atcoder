#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

long long GCD(long long a, long long b) {
    if (b == 0) return a;
    else return GCD(b, a % b);
}

int main() {
    int K; cin >> K;

    ll ans = 0;
    for(int a=1; a<=K; a++){
        for(int b=1; b<=K; b++){
            for(int c=1; c<=K; c++){
                ans += GCD(a, GCD(b, c));
            }
        }
    }

    cout << ans << endl;
}
