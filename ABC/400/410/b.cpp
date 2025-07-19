#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N, Q; cin >> N >> Q;
    vector<int> box(N, 0);
    rep(i, Q){
        int x; cin >> x;
        if(x!=0){
            cout << x << ' ';
            box[x-1] ++;
        }
        else{
            int b, s;
            b=-1; s=110;
            rep(j, N){
                if(box[j]<s){
                    s=box[j];
                    b=j;
                }
            }
            cout << b+1 << ' ';
            box[b]++;
        }
    }
    cout << endl;
}
