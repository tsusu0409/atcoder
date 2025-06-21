#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N, Q; cin >> N >> Q;
    vector<vector<int>> data = {};
    vector<int> pc(N, -1);
    int server = -1;
    map<int, string> sData;

    rep(i, Q){
        int q; cin >> q;
        if(q==1){
            int p; cin >> p;
            p--;
            if(server==-1){
                pc[p] = -1;
            }
            else{
                data.push_back(data[server]);
                pc[p] = data.size()-1;
            }
        }
        if(q==2){
            int p; cin >> p;
            p--;
            string s; cin >> s;
            if(pc[p]==-1){
                pc[p] = data.size();
                data.push_back({});
            }
            data[pc[p]].push_back(i);
            sData[i] = s;
        }
        if(q==3){
            int p; cin >> p;
            p--;
            server = pc[p];
        }
    }

    if(server!=-1){
        for(int i: data[server]) cout << sData[i];
    }
    cout << endl;
}
