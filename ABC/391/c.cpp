#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N, Q;
    cin >> N >> Q;
    vector<int> S(N);
    rep(i, N){
        S.at(i) = i;
    }
    rep(i, Q){
        int num, p, h;
        cin >> num;
        if(num == 1){
            cin >> p >> h;
            S.at(p-1) = h-1;
        }
        if(num == 2){
            int cnt = 0;
            vector<int> tmp(N);
            rep(i, N){
                tmp.at(i) = S.at(i);
            }
            sort(tmp.begin(), tmp.end());
            int check = 0;
            int done = -1;
            rep(i, N){
                if(tmp.at(i) != done){
                    done = tmp.at(i);
                    check = 0;
                }
                else if(check == 0){
                    cnt ++;
                    check = 1;
                }
            }
            cout << cnt << endl;
        }
    }
}
