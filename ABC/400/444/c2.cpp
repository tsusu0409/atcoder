#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N; cin >> N;
    vector<int> A(N);
    rep(i, N) cin >> A[i];

    ll sum = 0;
    int mA = 0;
    rep(i, N){
        sum += A[i];
        mA = max(mA, A[i]);
    }

    set<int> div;
    for(int d=1; d*d <= sum; d++){
        if(sum % d == 0){
            if(d >= mA) div.insert(d);
            if((sum/d) >= mA)div.insert(sum/d);
        }
    }

    sort(A.begin(), A.end());

    for(auto d: div){
        int i = 0;
        int j = N-1;

        for(j; j>=0; j--){
            if(A[j]!=d){
                break;
            }
        }

        if(j%2 != 1) break;

        int ans = 1;
        while(i<j){
            if(A[i] + A[j] == d){
                i++; j--;
                continue;
            }
            else{
                ans = 0;
                break;
            }
        }

        if(ans){
            cout << d << ' ';
        }
    }
    cout << endl;
}
