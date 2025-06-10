#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N, M, Q; cin >> N >> M >> Q;
    vector<set<int>> S(N);
    set<int> allPages;

    rep(i, Q){
        int q; cin >> q;
        if(q==1){
            int x, y; cin >> x >> y;
            x--; y--;
            S[x].insert(y);
        }
        if(q==2){
            int x; cin >> x;
            x--;
            allPages.insert(x);
        }
        if(q==3){
            int x, y; cin >> x >> y;
            x--; y--;
            if(allPages.count(x)){
                cout << "Yes" << endl;
            }
            else if(S[x].count(y)){
                cout << "Yes" << endl;
            }
            else{
                cout << "No" << endl;
            }
        }
    }
}
