#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N;
    cin >> N;
    vector<int> d(N);
    rep(i, N){
        cin >> d.at(i);
    }
    
    int maxD = 0;
    rep(i, N){
        if(maxD < d.at(i)){
            maxD = d.at(i);
        }
    }

    vector<int> num = {};
    rep(i, maxD){
        int count = 0;
        rep(j, N){
            if(i+1 == d.at(j)){
                count ++;
            }
        }
        num.push_back(count);
    }

    int ans = 0;
    rep(i, num.size()){
        if(num.at(i) != 0){
            ans ++;
        }
    }
    cout << ans << endl;
}
