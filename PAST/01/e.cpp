#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N, Q; cin >> N >> Q;
    vector<vector <int>> f(N);
    vector<vector <int>> fw(N);

    rep(i, Q){
        int q; cin >> q;
        if(q == 1){
            int a, b; cin >> a >> b;
            f[a-1].push_back(b-1);
            fw[b-1].push_back(a-1);
        }
        else if(q == 2){
            int a; cin >> a;
            rep(j, fw[a-1].size()){
                f[a-1].push_back(fw[a-1][j]);
                fw[fw[a-1][j]].push_back(a-1);
            }
        }
        else{
            int a; cin >> a;
            rep(j, f[a-1].size()){
                int x = f[a-1][j];
                rep(k, f[x].size()){
                    int tmp = f[x][k];
                    if(tmp == a-1){
                        continue;
                    }
                    else{
                        f[a-1].push_back(tmp);
                        fw[tmp].push_back(a-1);
                    }
                }
            }
        }
    }

    rep(i, N){
        rep(j, N){
            bool exist = 0;
            rep(k, f[i].size()){
                if(f[i][k] == j){
                    exist = 1;
                }
            }

            if(exist){
                cout << 'Y';
            }
            else{
                cout << 'N';
            }

            if(j == N-1){
                cout << endl;
            }
        }
    }

    // bot-test
}
