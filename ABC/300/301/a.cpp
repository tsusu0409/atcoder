#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N; cin >> N;
    string S; cin >> S;
    int t = 0;
    int a = 0;
    rep(i, N){
        if(S[i] == 'T'){
            t++;
        }
        else{
            a++;
        }
    }

    char last = S[N-1];

    if(t<a){
        cout << 'A' << endl;
    }
    else if(t>a){
        cout << 'T' << endl;
    }
    else{
        if(last == 'T'){
            cout << 'A' << endl;
        }
        else{
            cout << 'T' << endl;
        }
    }
}
