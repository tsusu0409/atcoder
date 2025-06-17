#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N, K; cin >> N >> K;

    int cnt = 0;
    vector<bool> exist(N+1, 1);

    int ans = 0;
    while(!ans){
        int p;
        for(int j=2; j<=N; j++){
            if(exist[j]) p = j;
        }

        int now = p;
        while(now <= N){
            cnt ++;
            if(cnt == K){
                ans = now;
                break;
            }
            exist[p] = 0;
            now += p;
        }
    }

    cout << ans << endl;
}
