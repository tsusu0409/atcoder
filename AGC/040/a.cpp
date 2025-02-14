#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    string S; cin >> S;
    int N = S.size() + 1;
    vector<int> ans(N+1);
    vector<string> sh = {};

    vector<string> data = {};
    for(int i = 0; i < N-1;){
        int j = i + 1;
        while(j < N-1 && S[j] == S[i]){
            j ++;
        }

        data.push_back(S.substr(i, j-i));

        i = j;
    }
    
    
}
