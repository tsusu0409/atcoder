#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int INF = 2147483647;

    int N; cin >> N;
    vector<int> R(N);
    vector<int> C(N);

    int maxR, minR;
    maxR=-1; minR=INF;

    int maxC, minC;
    maxC=-1; minC=INF;


    rep(i, N){
        int r, c; cin >> r >> c;
        R[i] = r;
        C[i] = c;

        maxR = max(r, maxR);
        minR = min(r, minR);

        maxC = max(c, maxC);
        minC = min(c, minC);
    }

    int gatherR = (maxR + minR) / 2;
    int gatherC = (maxC + minC) / 2;

    vector<int> cost(N, 0);
    rep(i, N){
        int costR = abs(gatherR - R[i]);
        int costC = abs(gatherC - C[i]);
        cost[i] += min(costR, costC) + abs(costR- costC);
    }

    int ans = -1;
    rep(i, N){
        ans = max(cost[i], ans);
    }

    cout << ans << endl;

}
