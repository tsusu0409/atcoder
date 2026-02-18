#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N; cin >> N;
    map<string, int> data;
    rep(i, N){
        string s; cin >> s;
        data[s] ++;
    }

    int maxS = 0;
    for(auto i: data){
        maxS = max(maxS, i.second);
    }

    for(auto i: data){
        if(i.second == maxS){
            cout << i.first << endl;
        }
    }
}
