#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N, M; cin >> N >> M;
    vector<int> R(M);
    vector<int> C(M);
    rep(i, M) cin >> R[i] >> C[i];

    set<P> data;

    rep(i, M){
        bool check = 1;
        for(int dr=-1; dr<=1; dr++){
            for(int dc=-1; dc<=1; dc++){
                int nowR = R[i] + dr;
                int nowC = C[i] + dc;

                if(data.count({nowR, nowC})){
                    check = 0;
                }
            }
        }

        if(check){
            data.insert({R[i],C[i]});
        }
    }

    cout << data.size() << endl;
}
