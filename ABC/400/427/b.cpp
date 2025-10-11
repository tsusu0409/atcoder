#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int digit_sum(int n){
   if(n<10) return n;
   else {
    return digit_sum(n/10) + n%10;
   }
}

int main() {
    int N; cin >> N;

    vector<ll> A(N+1, 0);
    A[0] = 1;

    for(int i=1; i<N+1; i++){
        ll sum = 0;
        rep(j, i){
            sum += digit_sum(A[j]);
        }
        A[i] = sum;
    }

    cout << A[N] << endl;
}
