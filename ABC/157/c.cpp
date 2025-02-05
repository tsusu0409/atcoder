#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> s(M);
    vector<int> c(M);
    rep(i, M){
        cin >> s.at(i) >> c.at(i);
    }

    // 探索範囲の決定
    int max = 1;
    rep(i, N){
        max *= 10;
    }
    int min = 1;
    rep(i, N-1){
        min *= 10;        
    }
    if(N==1){
        min = 0;
    }
    
    int ans = -1;
    // 探索範囲内の全整数を全探索
    for(int i = min; i < max; i++){
        int check = 1;
        // クエリとして処理
        rep(j, M){
            int waru = 1;
            rep(k, N-s.at(j)){
                waru *= 10;
            }
            int tmp = i / waru;
            tmp %= 10;
            if(tmp != c.at(j)){
                check *= 0;
            }
        }
        if(check){
            ans = i;
            break;
        }
    }
    cout << ans << endl;
}
