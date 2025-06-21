#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N, Q; cin >> N >> Q;
    vector<vector<int>> pc(N);
    vector<int> server;
    map<int, string> sData;
    rep(i, Q){
        int q; cin >> q;
        if(q==1){
            int p; cin >> p;
            p--;
            pc[p].resize(server.size());
            rep(j, server.size()){
                pc[p][j] = server[j];
            }
        }
        if(q==2){
            int p; cin >> p;
            p--;
            string s; cin >> s;
            pc[p].push_back(i);
            sData[i] = s;
        }
        if(q==3){
            int p; cin >> p;
            p--;
            server.resize(pc[p].size());
            rep(j, pc[p].size()){
                server[j] = pc[p][j];
            }
        }
    }
    rep(i, server.size()){
        cout << sData[server[i]];
    }
    cout << endl;
}
