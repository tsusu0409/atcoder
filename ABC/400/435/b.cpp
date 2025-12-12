#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N; cin >> N;
    vector<int> A(N);
    rep(i, N) cin >> A[i];

    int ans = 0;
    rep(i, N){
        for(int j=i+1; j<N; j++){
            int sum = 0;
            for(int k=i; k<=j; k++){
                sum += A[k];
            }

            bool check = 1;
            for(int k=i; k<=j; k++){
                if(sum%A[k] == 0) check = 0;
            }

            if(check) ans++;
        }
    }

    cout << ans << endl;
}
