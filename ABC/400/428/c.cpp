#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int Q; cin >> Q;
    
    string data = "";
    int depth = 0;
    bool bad = 0;
    int minFalse = 1e9;

    rep(q, Q){
        int x; cin >> x;
        if(x==1){
            char c; cin >> c;
            if(c=='(') depth++;
            else depth--;
            data += c;

            if(depth<0){
                bad = 1;
                int now = data.size();
                minFalse = min(now, minFalse);
            }
        }
        if(x==2){
            int lastI = data.size();
            if(data[lastI-1]=='(') depth--;
            else depth++;

            data.pop_back();

            int now = data.size();
            if(depth>=0 && now==minFalse-1){
                bad = 0;
                minFalse = 1e9;
            }
        }

        if(!bad && depth==0) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}
