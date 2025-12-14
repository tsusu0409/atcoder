#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int H, W;
vector<string> S;
vector<vector<int>> dist;

vector<vector<P>> warp(26);
vector<bool> used(26, 0);

void bfs(int sh, int sw) {
    queue<P> q;
    dist[sh][sw] = 0;
    q.push({sh, sw});

    while (!q.empty()) {
        auto[h, w]= q.front(); q.pop();

        rep(dir, 4){
            int nh = h+dx[dir];
            int nw = w+dy[dir];

            if (nh<0 || nh>=H || nw<0 || nw>=W) continue;
            if (S[nh][nw] == '#') continue;
            if (dist[nh][nw] != -1) continue;

            dist[nh][nw] = dist[h][w]+1;
            q.push({nh, nw});
        }

        if('a'<=S[h][w] && S[h][w]<='z'){
            int c = S[h][w]-'a';
            if (!used[c]) {
                used[c] = 1;
                for(auto [nh, nw]: warp[c]){
                    if(dist[nh][nw] == -1){
                        dist[nh][nw] = dist[h][w]+1;
                        q.push({nh, nw});
                    }
                }
            }
        }
    }
}

int main() {
    cin >> H >> W;
    S.resize(H);
    rep(i, H) cin >> S[i];

    dist.assign(H, vector<int>(W, -1));
    rep(i, H) rep(j, W){
        if('a'<=S[i][j] && S[i][j]<='z'){
            warp[S[i][j]-'a'].push_back({i, j});
        }
    }

    int sh = 0, sw = 0;
    bfs(sh, sw);

    cout << dist[H-1][W-1] << endl;
}
