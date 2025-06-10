#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N, Q; cin >> N >> Q;
    vector<int> p(N);
    vector<map<int, int>> s(N);
    map<int, int> num;
    rep(i, N){
        p[i] = i;
        s[i][i] ++;
    }

    rep(i, Q){
        int q; cin >> q;
        if(q == 1){
            int a, b; cin >> a >> b;
            s[p[a-1]][a-1] --;
            p[a-1] = b-1;
            s[p[a-1]][a-1] ++;
        }
        else if(q == 2){
            int a, b; cin >> a >> b;
            // hatoのdataの移動
            for(auto j: s[a-1]){
                if(j.second >= 1){
                    s[N] = {};
                    p[j.first] = N;
                    s[N][j.first] ++;
                }
            }
            for(auto j: s[b-1]){
                if(j.second >= 1){
                    p[j.first] = a-1;
                }
            }
            for(auto j: s[N]){
                if(j.second >= 1){
                    p[j.first] = b-1;
                }
            }

            // suのdataの移動
            map<int, int> tmpA(s[a-1]);
            map<int, int> tmpB(s[b-1]);
            
            s[a-1] = {};
            s[b-1] = {};

            for(auto j: tmpA){
                s[a-1][j.first] = j.second;
            }
            for(auto j: tmpB){
                s[b-1][j.first] = j.second;
            }
        }
        else{
            int a; cin >> a;
            cout << p[a-1] + 1 << endl;
        }
    }
}
