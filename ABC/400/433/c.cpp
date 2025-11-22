#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    string S; cin >> S;
    int N; N = S.size();

    vector<P> data = {};

    char b = '.';
    int cnt = 1;
    rep(i, N){
        if(S[i]==b){
            cnt++;
        }
        else{
            data.push_back({ b-'0' , cnt});
            b = S[i];
            cnt = 1;
        }
    }
    data.push_back({ b-'0' , cnt});

    int dataSize = data.size();
    ll ans = 0;
    rep(i, dataSize-1){
        if(data[i].first + 1 == data[i+1].first){
            ans += min(data[i].second, data[i+1].second);
        }
    }

    cout << ans << endl;
}
