#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N; cin >> N;
    vector<int> A(N);
    rep(i, N) cin >> A[i];

    map<int, int> data;

    rep(i, N){
        int now = i + 1;
        if(!data.contains(A[i])){
            cout << -1 << ' ';
        }
        else{
            cout << data[A[i]] << ' ';
        }
        data[A[i]] = now;
    }
    cout << endl;
}
