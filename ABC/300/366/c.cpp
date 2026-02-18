#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int Q; cin >> Q;
    map<int, int> box;

    int cnt = 0;

    rep(qi, Q){
        int q; cin >> q;
        if(q==1){
            int x; cin >> x;
            box[x] ++;
            if(box[x] == 1) cnt++;
        }
        if(q==2){
            int x; cin >> x;
            box[x] --;
            if(box[x]==0) cnt--;
        }
        if(q==3){
            cout << cnt << endl;
        }
    }
}
