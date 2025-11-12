#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N; cin >> N;
    vector<int> A(N);
    vector<int> Asort(N);
    rep(i, N){
        cin >> A[i];
        Asort[i] = A[i];
    }
    sort(Asort.begin(), Asort.end());

    rep(i, N){
        if(A[i] == Asort[N-2]){
            cout << i+1 << endl;
            return 0;
        }
    }
}
