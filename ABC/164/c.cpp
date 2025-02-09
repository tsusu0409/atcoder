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
    vector<string> S(N);
    rep(i, N){
        cin >> S[i];
    }

    map<string, int> num;
    rep(i, N){
        num[S[i]] ++;
    }

    cout << num.size() << endl;
}
