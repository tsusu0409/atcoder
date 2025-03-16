#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n, m; cin >> n >> m;
    vector<ll> s(n-1); // 入力される、1つ前の町との差
    vector<ll> d(n, 0); // 町1(index0)を基準とした絶対的な位置
    rep(i, n-1){
        cin >> s[i];
        d[i+1] = d[i] + s[i];
    }
    vector<int> a(m);
    rep(i, m){
        cin >> a[i];
    }

    ll sum = 0;
    int now = 0;
    rep(i, m){
        int next = now + a[i];
        ll nowD = d[next] - d[now];
        if(nowD<0){
            nowD *= -1;
        }
        sum += nowD;
        now = next;
    }

    cout << sum % 100000 << endl;
}