#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    string S; cin >> S;
    int N; cin >> N;
    int size = S.size();
    for(int i=N; i<size-N; i++){
        cout << S[i];
    }
    cout << endl;

}
