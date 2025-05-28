#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N; cin >> N;
    vector<int> A(N);
    map<int, int> data = {};
    int now;
    rep(i, N){
        cin >> A[i];
        if(A[i] == -1) now = i+1;
        data[A[i]] = i+1;
    }

    cout << now << ' ';
    rep(i, N-1){
        cout << data[now];
        now = data[now];
        
        if(i!=N-2) cout << ' ';
        else cout << endl;
    }
}
