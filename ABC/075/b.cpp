#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int H, W;
    cin >> H >> W;
    vector<string> S(H);
    rep(i, H){
        cin >> S.at(i);
    }

    vector<int> dx = {-1, 0, 1, -1, 0, 1, -1, 0, 1};
    vector<int> dy = {-1, -1, -1, 0, 0, 0, 1, 1, 1};
    rep(i, H){
        rep(j, W){
            int count = 0;
            if(S.at(i).at(j) == '#') {
                continue;
            }
            else{
                rep(k,9){
                    int x = i + dx.at(k);
                    int y = j + dy.at(k);
                    if(x < 0 || y < 0){
                        continue;
                    }
                    if(x >= H || y >= W){
                        continue;
                    }
                    else{
                        if(S.at(x).at(y) == '#'){
                            count++;
                        }
                    }
                }
            }
            S.at(i).at(j) = '0' + count;
        }
    }
    
    rep(i, H){
        rep(j, W-1){
            cout << S.at(i).at(j);
        }
        cout << S.at(i).at(W-1) << endl;
    }
}
