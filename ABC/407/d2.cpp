#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int H, W;
vector<vector<ll>> A;

const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};
bool seen[21][21];
bool domino[21][21];

void dfs(int h, int w) {
    seen[h][w] = 1;

    for (int dir = 0; dir < 4; ++dir) { //4方向どっちにドミノ置こうかな
        int dh = h + dx[dir];
        int dw = w + dy[dir];

        // 場外アウト
        if (nh < 0 || nh >= H || nw < 0 || nw >= W) continue;

        // 移動先が埋まってるとき
        if (domino[nh][nw]) continue;

        // ここから移動

    }

    // ドミノ置かない、4方向への移動
    for (int dir = 0; dir < 4; ++dir) { //4方向どっちに動こうかな
        int nh = h + dx[dir];
        int nw = w + dy[dir];

        // 場外アウト
        if (nh < 0 || nh >= H || nw < 0 || nw >= W) continue;

        // 移動先が埋まってるとき
        if (seen[nh][nw]) continue;

        // 再帰的に探索
        dfs(nh, nw);
    }
}

int main() {
    cin >> H >> W;
    A.assign(H, vector<ll>(W));
    rep(i, H){
        rep(j, W){
            cin >> A[i][j];
        }
    }

    // すべてのマス目について、置かれているor置かれていないを自由に決めてスコア出し
    // 20*1048576なので実行時間には間に合う
    // それがドミノ置きで実現できるかの検証方法がわからん


    ll maxScore = 0;

    for(int bit=0; bit<(1<<H*W); bit++){
        ll score = 0;
        for(int i=0; i<H*W; i++){
            int h = i / W;
            int w = i % W;

            if(bit & (1<<i)) score ^= A[h][w];
        }
        maxScore = max(score, maxScore);
    }

    cout << maxScore << endl;
}
