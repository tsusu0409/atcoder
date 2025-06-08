#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int T; cin >> T;
    rep(t, T){
        int N; cin >> N;
        string S; cin >> S;

        bool c = 0;
        int r, l; r=0; l=N-1;
        char move; move = '.';
        rep(i, N-1){
            if(S[i]>S[i+1]){
                c = 1;
                r = i;
                move = S[i];
                break;
            }
        }
        if(!c){
            cout << S << endl;
            continue;
        }

        for(int i=r+1; i<N; i++){
            if(S[i]>move){
                l = i - 1;
                break;
            }
        }

        int s=0;
        while(s<r){
            cout << S[s];
            s++;
        }
        s++;
        while(s<=l){
            cout << S[s];
            s++;
        }
        cout << move;
        while(s<N){
            cout << S[s];
            s++;
        }
        cout << endl;
    }
}
