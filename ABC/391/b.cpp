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
    vector<string> S(N);
    vector<string> T(M);
    rep(i, N){
        cin >> S.at(i);
    }
    rep(i, M){
        cin >> T.at(i);
    }

    int ansA = 0;
    int ansB = 0;
    rep(i, N-M+1){
        rep(j, N-M+1){
            int check = 1;
            rep(k, M){
                rep(l, M){
                    if(S.at(i+k).at(j+l) != T.at(k).at(l)){
                        check *= 0;
                        break;
                    }
                }
            }
            if(check == 1){
                ansA = i + 1;
                ansB = j + 1;
                break;
            }
        }
    }
    cout << ansA << " " << ansB << endl;
}