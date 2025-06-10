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
    rep(i, N){
        cin >> A[i];
    }

    vector<int> ans = {};
    for(int i = 0; i < N-1;){
        int sa = A[i+1] - A[i];
        if(sa == 1 || sa == -1){
            cout << A[i] << " ";
            i ++;
        }
        else{
            if(A[i] < A[i+1]){
                rep(j, A[i+1]-A[i]){
                    cout << A[i]+j << " ";
                }
            }
            else{
                rep(j, A[i]-A[i+1]){
                    cout << A[i]-j << " ";
                }
            }
            i ++;
        }
    }

    cout << A[N-1] << endl;
}
