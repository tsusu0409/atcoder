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
    vector<int> a(N);
    rep(i, N){
        cin >> a.at(i);
    }
    sort(a.rbegin(), a.rend());
    int Alice = 0;
    int Bob = 0;
    rep(i, N) {
        if(i%2==0){
            Alice += a.at(i);
        }
        else{
            Bob += a.at(i);
        }
    }
    cout << Alice - Bob << endl;
}
