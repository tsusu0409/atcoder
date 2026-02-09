#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(){
    int N; cin >> N;

    vector<int> A(N);
    int mA = 0;
    rep(i, N){
        cin >> A[i];
        mA = max(mA, A[i]);
    }

    vector<long long> cnt(mA + 2, 0);
    for(int a: A) cnt[a]++;

    vector<long long> num(mA + 3, 0);
    for(int i = mA; i >= 1; i--){
        num[i] = num[i+1] + cnt[i];
    }

    vector<long long> digit(mA + 5, 0);

    rep(i, mA){
        digit[i] += num[i+1];
    }

    rep(i, mA+4){
        digit[i+1] += digit[i] / 10;
        digit[i] %= 10;
    }

    int idx = mA + 4;
    while(idx > 0 && digit[idx] == 0) idx--;

    for(int i = idx; i >= 0; i--){
        cout << digit[i];
    }
    cout << endl;
}
