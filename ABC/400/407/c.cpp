#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    string S; cin >> S;
    
    // 最初は空文字列

    // 文字数を一致させるための操作がn回
    int ans = 0;
    int n = S.size();
    ans += n;

    // 各文字は1つ左の文字との差が正しい時に追加される
    for(int i=1; i<n; i++){
        int sa = S[i-1] -S[i];
        if(sa<0) sa += 10;
        ans += sa;
    }

    // 最後の文字を0から目標へ移す
    ans += S[n-1] - '0';

    cout << ans << endl;
}
