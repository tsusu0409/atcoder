#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N; cin >> N;
    int R, C; cin >> R >> C;
    string S; cin >> S;
    
    set<P> smoke = {};
    P t = {0, 0}; // 高橋くんの座標
    P f = {-R, -C}; // fireの座標

    smoke.insert(f);
    rep(i, N){
        if(S[i] == 'N'){
            t.first ++;
            f.first ++;
        }
        else if(S[i] == 'S'){
            t.first --;
            f.first --;
        }
        else if(S[i] == 'E'){
            t.second --;
            f.second --;
        }
        else{
            t.second ++;
            f.second ++;
        }
        smoke.insert(f);

        if(smoke.count({0, 0})){
            cout << 1;
        }
        else{
            cout << 0;
        }
    }
    cout << endl;
}