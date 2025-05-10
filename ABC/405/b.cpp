#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N, M; cin >> N >> M;
    vector<int> A(N);
    rep(i, N){
        cin >> A[i];
    }

    int ans = 0;
    rep(i, N){
        map<int, int> data = {};
        rep(j, A.size()){
            data[A[j]] ++;
        }
        bool check = 1;
        rep(j, M){
            if(data[j+1]==0){
                check = 0;
                break;
            }
        }

        if(check){
            ans ++;
            A.pop_back();
        }
        else break;
    }

    cout << ans << endl;
}