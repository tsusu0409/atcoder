#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N; cin >> N;
    vector<int> p(N);
    rep(i, N){
        cin >> p[i];
    }

    map<int, int> grad;
    rep(i, N){
        grad[(p[i]-i)%N] ++;
    }

    int ans = 0;
    rep(i, N){
        int check1 = i-1;
        if(check1<0) check1 += N;
        else if(check1>=N) check1 -= N;
        
        int check2 = i;
        if(check2<0) check2 += N;
        else if(check2>=N) check2 -=N;

        int check3 = i+1;
        if(check3<0) check3 += N;
        else if(check3>=N) check3 -= N;

        int sum = grad[i-1] + grad[i] + grad[i+1];
        ans = max(ans, sum);
    }

    cout << ans << endl;
}