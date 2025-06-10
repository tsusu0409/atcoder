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
    vector<int> A(N);
    rep(i, N){
        cin >> A[i];
    }

    map<int, int> num;
    rep(i, N){
        num[A[i]] ++;
    }

    int check = 1;
    for(auto i: num){
        if(i.second > 1){
            check = 0;
        }
    }

    if(check){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}
