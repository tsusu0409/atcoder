#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int H, W; cin >> H >> W;
    vector<string> S(H);
    rep(i, H) cin >> S[i];

    int ans = 0;
    rep(i, H) rep(j, W) if(S[i][j]=='#') ans++;

    bool roop = 1;
    while(roop){
        queue<P> que;
        rep(i, H){
            rep(j, W){
                if(S[i][j]=='.'){
                    int cnt = 0;
                    if(i!=0){
                        if(S[i-1][j]=='#') cnt++;
                    }
                    if(j!=0){
                        if(S[i][j-1]=='#') cnt++;
                    }
                    if(i!=H-1){
                        if(S[i+1][j]=='#') cnt++;
                    }
                    if(j!=W-1){
                        if(S[i][j+1]=='#') cnt++;
                    }

                    if(cnt==1){
                        que.push({i, j});
                    }
                }
            }
        }
        int queSize = que.size();
            if(!queSize){
                roop = 0;
                break;
            }
            ans += queSize;

            while(que.size()){
                P now = que.front();
                que.pop();
                S[now.first][now.second] = '#';
            }
    }
    cout << ans << endl;
}
