#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    vector<int> A(5);
    rep(i, 5){
        cin >> A.at(i);
    }
    
    int count = 0;
    rep(i, 4){
        if(A.at(i) != i+1){
            int tmp = A.at(i);
            A.at(i) = A.at(i+1);
            A.at(i+1) = tmp;
            count ++;
            break;
        }
    }

    int ans = 1;
    rep(i, 5){
        if(A.at(i) != i+1){
            ans = 0;
            break;
        }
    }
    ans *= count;

    if(ans){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}
