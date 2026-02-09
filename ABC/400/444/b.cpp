#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int sum_digit(int N, int res){
    if(N>=10){
        int now = N % 10;
        N /= 10;
        res += now;
        return sum_digit(N, res);
    }
    else{
        res += N;
        return res;
    }
}

int main() {
    int N, K; cin >> N >> K;
    int ans = 0;
    rep(i, N){
        int j = i + 1;
        if(sum_digit(j, 0) == K) ans++;
    }

    cout << ans << endl;
}
