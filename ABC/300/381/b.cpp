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
    int ans = 1;
    if(S.size() % 2 != 0){
        ans *= 0;
    }

    int half = S.size() / 2;
    rep(j, half){
        int i = j + 1;
        if(S.at(2*i -2) != S.at(2*i -1)){
            ans *= 0;
        }
    }

    sort(S.begin(), S.end());
    vector<char> data(0);
    int count = 0;
    rep(i, S.size()){
        int check = 1;
        rep(j, data.size()){
            if(data.at(j) == S.at(i)){
                check *= 0;
            }
        }
        if(check){
            count ++;
            data.push_back(S.at(i));
        }
    }
    if(count != half){
        ans *= 0;
    }

    if(ans){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}
