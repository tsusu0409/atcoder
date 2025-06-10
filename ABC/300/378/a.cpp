#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    map<int, int> num;
    rep(i, 4){
        int A;
        cin >> A;
        num[A] ++;
    }

    int ans = 0;
    for(auto i: num){
        if(i.second > 1){
            ans ++;
        }
        if(i.second > 3){
            ans ++;
        }
    }

    cout << ans << endl;
}
