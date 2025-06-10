#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    string s; cin >> s;
    int n = s.size();
    string data = "abcdefghijklmnopqrstuvwxyz";
    int max = data.size();
    char ans = '0';
    rep(i, max){
        bool check = 1;
        rep(j, n){
            if(s[j]==data[i]){
                check = 0;
            }
        }
        if(check){
            ans = data[i];
            break;
        }
    }
    cout << ans << endl;
}
