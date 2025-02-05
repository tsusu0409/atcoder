#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int X;
    cin >> X;
    int max = 1;
    for(int b = 2; b < X; b++){
        int tmp = b*b;
        while(tmp<=X){
            if(tmp > max){
                max = tmp;
            }
            tmp *= b;
        }
    }
    cout << max << endl;
}
