#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N, Q; cin >> N >> Q;
    set<int> bkData;
    int ans = 0;
    rep(i, Q){
        int A; cin >> A;
        if(bkData.count(A)){
            bool left = bkData.count(A-1);
            bool right = bkData.count(A+1);

            if(left && right){
                ans ++;
            }
            else if(!left && !right){
                ans --;
            }
            bkData.erase(A);
        }
        else{
            bool left = bkData.count(A-1);
            bool right = bkData.count(A+1);

            if(left && right){
                ans --;
            }
            else if(!left && !right){
                ans ++;
            }
            bkData.insert(A);
        }
        cout << ans << endl;
    }
}
