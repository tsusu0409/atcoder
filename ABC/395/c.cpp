#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N; cin >> N;
    vector<int> A(N);
    map<int, int> num;
    map<int, int> last;
    int ans = N+1;
    rep(i, N){
        cin >> A[i];
        num[A[i]] ++;
        if(num[A[i]] >= 2){
            int check = i - last[A[i]] + 1;
            if(check < ans){
                ans = check;
            }
        }
        last[A[i]] = i;
    }

    if(ans == N+1){
        cout << -1 << endl;
    }
    else{
        cout << ans << endl;
    }
}
