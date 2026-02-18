#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    ll N; cin >> N;
    set<ll> ans;

    for(ll i=1; i*i<=N; i++){
        if(N%i == 0){
            ans.insert(i);
            ans.insert(N/i);
        }
    }

    for(auto i: ans){
        cout << i << endl;
    }
}
