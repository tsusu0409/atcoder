#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    string S, T; cin >> S >> T;

    int n = S.size();
    map<char, int> Sdata;
    map<char, int> Tdata;
    rep(i, n){
        Sdata[S[i]] ++;
        Tdata[T[i]] ++;
    }

    bool ans = 1;
    string base = "abcdefghijklmnopqrstuvwxyz";
    int Slack = 0;
    int Tlack = 0;
    rep(i, 26){
        if(Sdata[base[i]]==Tdata[base[i]]) continue;

        bool check = 0;
        string atcoder = "atcoder";
        rep(j, 7){
            if(base[i] == atcoder[j]) check = 1;
        }

        if(!check){
            ans = 0;
            break;
        }
        else{
            if(Sdata[base[i]]>Tdata[base[i]]) Tlack += Sdata[base[i]]-Tdata[base[i]];
            else Slack += Tdata[base[i]]-Sdata[base[i]];
        }
    }

    if(Slack>Sdata['@']) ans = 0;
    if(Tlack>Tdata['@']) ans = 0;
    

    if(ans) cout << "Yes" << endl;
    else cout << "No" << endl;
}
