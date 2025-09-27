#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;


int H, W;

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

bool safe(int x, int y) {
    if(0<=x && 0<=y && x<H && y<W) return 1;
    else return 0;
}

int main() {
    cin >> H >> W;
    vector<string> S(H);
    rep(i, H) cin >> S[i];

    int ans = 0;
    rep(i, H) rep(j, W) if(S[i][j]=='#') ans++;

    
    vector<vector<int>> cnt(H, vector<int>(W, 0));
    rep(i, H) rep(j, W){
        if(S[i][j] == '.'){
            int nowCnt = 0;
            rep(d, 4){
                if(safe(i+dx[d], j+dy[d]) && S[i+dx[d]][j+dy[d]]=='#') nowCnt ++;
            }
            cnt[i][j] = nowCnt;
        }
    }

    queue<P> que;
    rep(i, H) rep(j, W) {
        if(cnt[i][j]==1) que.push({i, j});
    }

    while(que.size()){
        int x = que.front().first;
        int y = que.front().second;
        que.pop();

        if(S[x][y]=='#') continue;
        else {
            S[x][y] = '#';
            ans ++;
        }

        rep(d, 4){
            int nx = x + dx[d];
            int ny = y + dy[d];

            if(!safe(nx, ny)) continue;
            if(S[nx][ny]!='.') continue;

            cnt[nx][ny] ++;
            if(cnt[nx][ny]==1) {
                que.push({nx, ny});
            }
        }
    }
    cout << ans << endl;
}
