#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(){
    int N; cin >> N;
    vector<ll> A(N);
    rep(i, N) cin >> A[i];

    sort(A.begin(), A.end());

    ll sum = 0;
    rep(i, N) sum += A[i];
    ll mA = A.back();

    set<ll> ans;
    for(int K = (N + 1) / 2; K <= N; K++){
        if(sum % K != 0) continue;
        ll L = sum / K;
        if(L < mA) continue;

        int i = 0, j = N - 1;
        bool ok = 1;
        int used = 0;

        while(i <= j){
            if(A[j] == L){
                used++;
                j--;
            }
            else{
                if(i == j || A[i] + A[j] != L){
                    ok = 0;
                    break;
                }
                used++;
                i++;
                j--;
            }
        }

        if(ok && used == K) ans.insert(L);
    }

    for(ll x : ans){
        cout << x << ' ';
    }
    cout << endl;
}
