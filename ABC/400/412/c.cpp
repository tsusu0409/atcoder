#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(){
    int T; cin >> T;
    rep(t, T){
        int N; cin >> N;
        vector<int> S = {};
        int d1 = 0;
        int dN = 0;
        rep(i, N){
            int s;
            cin >> s;
            if(i==0) d1 = s;
            else if(i==N-1) dN = s;
            else S.push_back(s);
        }

        if(d1*2>=dN){
            cout << 2 << endl;
            continue;
        }

        sort(S.begin(), S.end());
        int SSize = S.size();

        if(!SSize){
            cout << -1 << endl;
            continue;
        }

        bool possible = 1;
        int ans = 0;
        int now = d1;
        int nowi = 0;
        while(now<dN){
            int nexti = -1;
            for(int i=nowi; i<SSize; i++){
                if(now*2>=S[i]) nexti = i;
                else break;
            }
        
            if(nexti == -1){
                possible = 0;
            }

            now = S[nexti];
            ans++;

            nowi = nexti + 1;

            if(now*2>=dN) break;
        }

        if(possible) cout << ans+2 << endl;
        else cout << -1 << endl;
    }
}
