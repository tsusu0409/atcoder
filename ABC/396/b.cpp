#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int Q; cin >> Q;
    vector<int> data(100, 0);

    rep(i, Q){
        int q; cin >> q;
        if(q==1){
            int x; cin >> x;
            data.push_back(x);
        }
        else{
            cout << data[data.size()-1] << endl;
            data.pop_back();
        }
    }
}
