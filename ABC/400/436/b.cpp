#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N; cin >> N;
    vector<vector<int>> a(N, vector<int>(N, -1));

    int first = (N-1)/2;
    a[0][first] = 1;

    int r = 0;
    int c = first;
    int k = 1;

    int roop = N*N - 1;
    rep(i, roop){
        int nowR = (r-1+N) % N;
        int nowC = (c+1) % N;

        if(a[nowR][nowC] != -1){
            nowR = (r+1) % N;
            nowC = c;
        }

        a[nowR][nowC] = k+1;

        r = nowR;
        c = nowC;
        k++;
    }

    rep(i, N){
        rep(j, N) cout << a[i][j] << ' ';
        cout << endl;
    }
}
