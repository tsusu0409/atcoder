#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main() {
    int H, W; cin >> H >> W;
    vector<string> S(H);
    vector<P> saveE = {};
    rep(i, H){
        cin >> S[i];
        rep(j, S[i].size()){
            if(S[i][j] == 'E'){
                saveE.push_back({i, j});
            }
        }
    }

    vector<vector<int>> dis(H, vector<int>(W, 100010));

    for(auto e: saveE){
        int eh = e.first;
        int ew = e.second;

        // now Eより上かつ右、上かつ左、下かつ左、下かつ右の順でdp
        for(int i=eh; i>=0; i--){
            for(int j=ew; j<W; j++){
                if(S[i][j] == '#') continue;
                if(S[i][j] == 'E') continue;

                int nowMin = dis[i][j];
                rep(dir, 4){
                    int nh = i + dx[dir];
                    int nw = j + dy[dir];

                    if(nh<0 || nh>=H || nw<0 || nw>=W) continue;
                    if(S[nh][nw] == '#') continue;

                    nowMin = min(dis[nh][nw]+1, nowMin);
                }
                dis[i][j] = nowMin;
            }
        }
        for(int i=eh; i>=0; i--){
            for(int j=ew; j>=0; j--){
                if(S[i][j] == '#') continue;
                if(S[i][j] == 'E') continue;

                int nowMin = dis[i][j];
                rep(dir, 4){
                    int nh = i + dx[dir];
                    int nw = j + dy[dir];

                    if(nh<0 || nh>=H || nw<0 || nw>=W) continue;
                    if(S[nh][nw] == '#') continue;

                    nowMin = min(dis[nh][nw]+1, nowMin);
                }
                dis[i][j] = nowMin;
            }
        }
        for(int i=eh; i<H; i++){
            for(int j=ew; j>=0; j--){
                if(S[i][j] == '#') continue;
                if(S[i][j] == 'E') continue;

                int nowMin = dis[i][j];
                rep(dir, 4){
                    int nh = i + dx[dir];
                    int nw = j + dy[dir];

                    if(nh<0 || nh>=H || nw<0 || nw>=W) continue;
                    if(S[nh][nw] == '#') continue;

                    nowMin = min(dis[nh][nw]+1, nowMin);
                }
                dis[i][j] = nowMin;
            }
        }
        for(int i=eh; i<H; i++){
            for(int j=ew; j<W; j++){
                if(S[i][j] == '#') continue;
                if(S[i][j] == 'E') continue;

                int nowMin = dis[i][j];
                rep(dir, 4){
                    int nh = i + dx[dir];
                    int nw = j + dy[dir];

                    if(nh<0 || nh>=H || nw<0 || nw>=W) continue;
                    if(S[nh][nw] == '#') continue;

                    nowMin = min(dis[nh][nw]+1, nowMin);
                }
                dis[i][j] = nowMin;
            }
        }
    }

    rep(i, H){
        rep(j, W){
            if(S[i][j]=='E'){
                cout << 'E';
            }
            else if(S[i][j]=='#'){
                cout << '#';
            }
            else{
                cout << dis[i][j];
            }
        }
        cout << endl;
    }
}