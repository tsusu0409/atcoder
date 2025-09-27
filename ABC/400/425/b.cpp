#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N; cin >> N;
    vector<int> A(N);
    rep(i, N) cin >> A[i];

    bool ans = 1;

    // Aのダブりチェック
    map<int, int> Adata;
    rep(i, N){
        Adata[A[i]] ++;
        if(A[i]!=-1 && Adata[A[i]]>=2){
            ans = 0;
            break;
        }
    }
    
    if(!ans){
        cout << "No" << endl;
        return 0;
    }

    cout << "Yes" << endl;
    rep(i, N){
        if(A[i]!=-1){
            cout << A[i] << ' ';
        }
        else{
            rep(j, N){
                int now = j + 1;
                if(!Adata[now]){
                    cout << now << ' ';
                    Adata[now] ++;
                    break;
                }
            }
        }
    }
    cout << endl;
}
