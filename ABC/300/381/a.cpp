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
    string S;
    cin >> S;

    int ans = 1;
    if(S.size() % 2 == 0){
        ans *= 0;
    }
    else{
        int slash = ((S.size() + 1) / 2) - 1;
        rep(i, N){
            if(i < slash){
                if(S.at(i) != '1'){
                    ans *= 0;
                }
            }
            else if(i == slash){
                if(S.at(i) != '/'){
                    ans *= 0;
                }
            }
            else{
                if(S.at(i) != '2'){
                    ans *= 0;
                }
            }
        }
    }
    
    if(ans){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}
