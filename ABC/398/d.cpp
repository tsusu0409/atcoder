#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N; cin >> N;
    int R, C; cin >> R >> C;
    string S; cin >> S;
    
    vector<map<char, int>> move(N);
    rep(i, N){
        int check = 0;
        rep(j, i){
            if(S[i] == 'N'){
                move[j]['r'] --;
            }
            else if(S[i] == 'S'){
                move[j]['r'] ++;
            }
            else if(S[i] == 'W'){
                move[j]['c'] --;
            }
            else if(S[i] == 'N'){
                move[j]['c'] ++;
            }

            if(move[j]['r'] == R && move[j]['c'] == C){
                check = 1;
                break;
            }
        }
        cout << check;
    }
    cout << endl;
}