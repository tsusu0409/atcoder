#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    ll N; cin >> N;

    vector<ll> divNum = {};
    for(ll i = 1; i * i <= N; i++){
        if(N%i == 0){
            divNum.push_back(i);
            if(N/i != i){
                divNum.push_back(N/i);
            }
        }
    }

    sort(divNum.begin(), divNum.end());

    for(auto A: divNum){
        ll B = 
        
    }
}
