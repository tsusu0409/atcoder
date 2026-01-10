#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

void search(int x, int y; vector<ll> exist_sum){
    int now = x + y;
    int exist_cnt = exist_sum[now] - exist_sum[x - 1];

    if(exist_cnt == 0){
        return now;
    }
    else{
        int next = search(now, exist_cnt, exist_sum);
        return next;
    }
}

int main() {
    int N, Q; cin >> N >> Q;
    vector<ll> A(N);
    rep(i, N) cin >> A[i];

    sort(A.begin(), A.end());

    vector<int> exist(1e9+10, 0);
    rep(i, N){
        exist[A[i]] ++;
    }

    vector<ll> exist_sum(1e9+10, 0);
    rep(i, 1e9+10){
        if(i==0) continue;
        exist_sum[i] = exist_sum[i-1] + exist[i];
    }

    rep(i, Q){
        int x, y; cin >> x >> y;

    }
}
