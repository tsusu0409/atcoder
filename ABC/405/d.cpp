#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

/*

これはdfsで実装してうまく動かなくて失敗したコード
消すのもったいないので残しておく

*/

const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int H, W;
vector<string> field;

bool visited[1010][1010];
int dis[1010][1010];

void dfs(int h, int w) {
    visited[h][w] = 1;

    rep(dir, 4){
        int nh = h + dx[dir];
        int nw = w + dy[dir];

        if(nh<0 || nh>=H || nw<0 || nw>=W) continue;
        if(field[nh][nw] == '#') continue;
        if(visited[nh][nw]) continue;

        dis[nh][nw] = min(dis[nh][nw], dis[h][w]+1);

        dfs(nh, nw);
    }
}

int main() {
    cin >> H >> W;
    field.resize(H);
    
    vector<pair<int, int>> saveE = {};

    rep(i, H){
        rep(j, W){
            cin >> field[i][j];
            if(field[i][j]=='E'){
                saveE.push_back({i, j});
                dis[i][j] = 0;
            }
            else{
                dis[i][j] = 100010;
            }
        }
    }

    for(auto e: saveE){
        int eh = e.first;
        int ew = e.second;
        rep(i, H) rep(j, W) visited[i][j] = 0;
        dfs(eh, ew);
    }

    rep(i, H){
        rep(j, W){
            if(field[i][j]=='E'){
                cout << 'E';
            }
            else if(field[i][j]=='#'){
                cout << '#';
            }
            else{
                cout << dis[i][j];
            }
            cout << '/';
        }
        cout << endl;
    }
}