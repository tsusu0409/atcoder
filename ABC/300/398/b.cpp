#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    vector<int> A(7);
    map<int, int> num;
    rep(i, 7){
        cin >> A[i];
        num[A[i]] ++;
    }
    
    vector<int> data = {};
    for(auto i: num){
        data.push_back(i.second);
    }
    
    sort(data.rbegin(), data.rend());

    if(data.size() >= 2){
        if(data[0] >= 3 && data[1] >= 2){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
    else{
        cout << "No" << endl;
    }
}