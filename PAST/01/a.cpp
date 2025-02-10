#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    string S;
    cin >> S;
    bool check = 1;
    rep(i, 3){
        if(S[i] >= '0' && S[i] <= '9'){
        }
        else{
            check = 0;
        }
    }

    if(check){
        int num = stoi(S);
        cout << num * 2 << endl;
    }
    else{
        cout << "error" << endl;
    }
}