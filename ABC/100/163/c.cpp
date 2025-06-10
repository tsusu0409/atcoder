#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N; cin >> N;
    map<int, int> num;
    rep(i, N-1){
        int A;
        cin >> A;
        num[A] ++;
    }

    rep(i, N){
        cout << num[i+1] << endl;
    }
}
