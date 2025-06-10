#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N, Y;
    cin >> N >> Y;
    int ansA = -1;
    int ansB = -1;
    int ansC = -1;
    rep(a, N+1){
        rep(b, N+1){
            int c = N - a - b;
            if(c<0 || c>N){
                continue;
            }
            if(10000*a + 5000*b + 1000*c == Y){
                ansA = a;
                ansB = b;
                ansC = c;
                break;
            }
        }
    }
    cout << ansA << " " << ansB << " " << ansC << endl;
}