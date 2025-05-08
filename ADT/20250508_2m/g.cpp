#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    string S; cin >> S;
    int N = S.size();
    vector<map<int, int>> data(N);

    rep(i, N){
        if(i==0){
            data[i][S[i]] ++;
        }
        else{
            for(auto j: data[i-1]){
                data[i][j.first] = data[i][j.second];
            }
            data[i][S[i]] ++;
        }
    }

    
}