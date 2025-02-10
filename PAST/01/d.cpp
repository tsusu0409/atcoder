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
    vector<int> A(N);
    ll sumA = 0;
    rep(i, N){
        cin >> A[i];
        sumA += A[i];
    }
    ll sumC = N * (N-1) / 2;

    map<int, int> num;
    rep(i, N){
        num[A[i]] ++;
    }

    bool check = 1;
    int over = 0;
    for(auto i: num){
        if(i.second != 1){
            check = 0;
            over = i.first;
        }
    }

    if(check){
        cout << "Correct" << endl;
    }
    else{
        cout << over << " " << (sumA - sumC)/2 << endl;
    }
}