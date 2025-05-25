#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

// 四方向への移動ベクトル
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

// 入力
int H, W;
vector<vector<char>> field;

// 探索
bool seen[21][21];
int cnt;
void dfs(int h, int w) {
    seen[h][w] = 1;
    cnt++;

    // 四方向を探索
    for (int dir = 0; dir < 4; ++dir) {
        int nh = h + dx[dir];
        int nw = w + dy[dir];

        // 場外アウトしたり、移動先が壁の場合はスルー
        if (nh < 0 || nh >= H || nw < 0 || nw >= W) continue;
        if (field[nh][nw] == '#') continue;

        // 移動先が探索済みの場合
        if (seen[nh][nw]) continue;

        // 再帰的に探索
        dfs(nh, nw);
    }
}


int main() {
    cin >> H >> W;
    vector<vector<ll>> A(H, vector<ll>(W));
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
        vector<P> offData = {};
        ll score = 0;
        for(int i=0; i<H*W; i++){
            int h = i / W;
            int w = i % W;

            if(bit & (1<<i)) score ^= A[h][w];
            else offData.push_back({h, w});
        }

        // offDataがドミノで実現できるかを試したい
        // ここでdfsの可能性

        // グリッドを作成
        field.assign(H, vector<char>(W, '#'));
        int offDataSize = offData.size();
        rep(i, offDataSize){
            field[offData[i].first][offData[i].second] = '.'; 
        }

        // dfsして連結成分のサイズが全部偶数なら有効
        bool check = 1;

        rep(i, H){
            rep(j, W){
                if(seen[i][j]) continue;
                cnt = 0;
                dfs(i, j);
                if(cnt%2 != 0) check = 0;
            }
        }        

        if(check) maxScore = max(score, maxScore);
    }

    cout << maxScore << endl;
}
