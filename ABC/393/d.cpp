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
    int sum = 0;
    rep(i, N){
        sum += S[i] - '0';
    }

    int maSum = 0;
    rep(i, N-sum){
        int count = 0;
        rep(j, sum){
            if(S[j] == '1'){
                count ++;
            }
        }
        maSum = max(count, maSum);
    }

    cout << sum - maSum << endl;

    // 問題文誤読してた、そりゃ無理や
}
