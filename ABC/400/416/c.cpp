#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

void generate(const vector<string>& S, int K, string c, vector<string>& res){
    if(K==0){
        res.push_back(c);
        return;
    }
    else{
        for(const auto& s: S){
            generate(S, K-1, c+s, res);
        }
    }
}

int main() {
    int N, K, X; cin >> N >> K >> X;
    vector<string> S(N);
    rep(i, N) cin >> S[i];

    sort(S.begin(), S.end());

    vector<int> used(N, 0);

    vector<string> all;
    generate(S, K, "", all);

    sort(all.begin(), all.end());

    cout << all[X-1] << endl;
}
