#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int Q; cin >> Q;
    vector<int> vec = {};
    rep(q, Q){
        int p; cin >> p;
        if(p==1){
            int x; cin >> x;
            vec.push_back(x);
        }
        if(p==2){
            sort(vec.rbegin(), vec.rend());
            cout << vec[vec.size()-1] << endl;
            vec.pop_back();
        }
    }
}
