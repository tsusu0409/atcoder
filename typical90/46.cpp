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
    vector<ll> A(N);
    vector<ll> B(N);
    vector<ll> C(N);
    rep(i, N){
        cin >> A[i];
    }
    rep(i, N){
        cin >> B[i];
    }
    rep(i, N){
        cin >> C[i];
    }

    rep(i, N){
        A[i] %= 46;
        B[i] %= 46;
        C[i] %= 46;
    }

    map<int, ll> numA;
    map<int, ll> numB;
    map<int, ll> numC;
    rep(i, N){
        numA[A[i]] ++;
        numB[B[i]] ++;
        numC[C[i]] ++;
    }

    ll ans = 0;
    for(auto a: numA){
        for(auto b: numB){
            for(auto c: numC){
                ll sum = a.first + b.first + c.first;
                if(sum % 46 == 0){
                    ans += (a.second * b.second * c.second);
                }
            }
        }
    }
    cout << ans << endl;
}
