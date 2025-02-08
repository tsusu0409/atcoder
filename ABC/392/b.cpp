#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A(M);
    rep(i, M){
        cin >> A.at(i);
    }
    vector<int> ans = {};

    rep(i, N){
        int exist = 1;
        rep(j, M){
            if(i+1 == A.at(j)){
                exist = 0;
            }
        }
        if(exist){
            ans.push_back(i+1);
        }
    }

    cout << ans.size() << endl;

    if(ans.size()>0){
        rep(i, ans.size()-1){
            cout << ans.at(i) << " ";
        }
        cout << ans.at(ans.size()-1) << endl;
    }
    else{
        cout << endl;
    }
    
}
