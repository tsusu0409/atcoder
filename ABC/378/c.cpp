#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N; cin >> N;
    map<int, int> data;
    rep(i, N){
        int A;
        cin >> A;
        if(data.count(A)){
            if(i != N -1){
                cout << data[i] << " ";
            }
            else{
                cout << data[i] << endl;
            }
        }
        else{
            if(i != N-1){
                cout << -1 << " ";
            }
            else{
                cout << -1 << endl;
            }
        }
        data[A] = i+1;
    }
}
