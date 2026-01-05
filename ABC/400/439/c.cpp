#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N; cin >> N;
    int INF = 1e4;
    vector<int> pat(1e7, 0);

    for(int i=1; i<INF; i++){
        for(int j=1; j<INF; j++){
            if(i>=j) continue;

            int now = i*i + j*j;
            if(now>1e7) break;
            pat[now] ++;
        }
    }

    int ans = 0;
    vector<int> ans_data = {};
    rep(i, N){
        if(pat[i+1]==1){
            ans++;
            ans_data.push_back(i+1);
        }
    }

    cout << ans << endl;
    rep(i, ans_data.size()){
        cout << ans_data[i] << ' ';
    }
    cout << endl;
}