#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N, M; cin >> N >> M;
    rep(i, N){
        if(i+1<=M) cout << "OK" << endl;
        else cout << "Too Many Requests" << endl;
    }
}
