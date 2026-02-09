#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N; cin >> N;
    vector<int> A(N);
    rep(i, N) cin >> A[i];

    int sum = 0;
    rep(i, N) sum += A[i];

    set<int> div;
    for(int d=1; d*d <= sum; d++){
        if(sum % d == 0){
            div.insert(d);
        }
    }

    
}
