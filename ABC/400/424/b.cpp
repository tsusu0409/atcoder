#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N, M, K; cin >> N >> M >> K;
    vector<int> data(N, 0);
    
    int fin = 0;
    rep(i, M){
        fin += i+1;
    }

    rep(k, K){
        int A, B; cin >> A >> B;
        A--;
        data[A] += B;

        if(data[A] == fin) cout << A+1 << ' ';
    }
}
