#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N, M;
    cin >> N >> M;

    map<int, int> num;
    rep(i, N){
        int K;
        cin >> K;
        rep(j, K){
            int A;
            cin >> A; 
            num[A] ++;
        }
    }
    
    int ans = 0;
    for(auto i: num){
        if(i.second == N){
            ans ++;
        }
    }
    cout << ans << endl;
}
