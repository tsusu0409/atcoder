#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N; cin >> N;
    map<int, int> a;
    rep(i, N){
        int x; cin >> x;
        a[i+1] = x;
    }

    bool ans = 0;
    int count = 0;
    int now = 1;
    rep(i, N){
        if(now==2){
            ans = 1;
            break;
        }
        now = a[now];
        count ++;
    }

    if(ans){
        cout << count << endl;
    }
    else{
        cout << -1 << endl;
    }
}
