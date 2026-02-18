#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N, K; cin >> N >> K;
    vector<int> A(N); rep(i, N) cin >> A[i];

    sort(A.begin(), A.end());

    int max1 = A[N-1] - A[N-2];
    int min1 = A[1] - A[0];

    
}
