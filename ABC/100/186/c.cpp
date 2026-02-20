#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

bool okCheck(int N, int check){
    if(N < check){
        if(N==7) return 0;
        else return 1;
    }
    else{
        int now = N % check;
        if(now == 7){
            return 0;
        }
        else{
            return okCheck(N/check, check);
        }
    }
}

int main() {
    int N; cin >> N;
    int cnt = 0;
    for(int i=1; i<=N; i++){
        if(okCheck(i, 10) && okCheck(i, 8)){
            cnt++;
        }
    }
    cout << cnt << endl;
}
