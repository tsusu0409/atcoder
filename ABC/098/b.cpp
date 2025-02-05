#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N;
    string S;
    cin >> N >> S;
    int max = 0;
    for(int i = 1; i < N-1; i++){
        // XとYを作る
        string X = {};
        string Y = {};
        rep(j, i){
            X.push_back(S.at(j));
        }
        for(int j = i; j < N; j++){
            Y.push_back(S.at(j));
        }

        // 種類数の計算
        int count = 0;
        vector<char> D = {};
        rep(j, X.size()){
            rep(k, Y.size()){
                if(Y.at(k) == X.at(j) && Y.at(k)){
                    int check = 1;
                    rep(l, D.size()){
                        if(Y.at(k) == D.at(l)){
                            check *= 0;
                        }
                    }
                    if(check){
                        count ++;
                        D.push_back(Y.at(k));
                    }
                }
            }
        }
        if(count > max){
            max = count;
        }
    }
    cout << max << endl;
}
