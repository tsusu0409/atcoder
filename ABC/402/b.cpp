#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int Q; cin >> Q;
    int b = 0;
    vector<int> d = {};

    rep(i, Q){
        int q; cin >> q;
        if(q==1){
            int x; cin >> x;
            d.push_back(x);
        }
        else{
            cout << d[b] << endl;
            b++;
        }
    }
}
