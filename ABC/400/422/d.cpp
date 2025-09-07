#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N; cin >> N;
    ll K; cin >> K;

    queue<ll> data;
    data.push(K);
    rep(i, N){
        queue<ll> next;
        rep(j, 1<<i){
            ll nowNum = data.front();
            data.pop();

            if(nowNum%2==0){
                next.push(nowNum/2);
                next.push(nowNum/2);
            }
            else{
                next.push(nowNum/2);
                next.push(nowNum/2 + 1);
            }
        }

        data = next;
    }

    
    queue<ll> maxminCheck;
    maxminCheck = data;
    ll maxB = 0;
    ll minB = 1e18;
    while(!maxminCheck.empty()){
        ll num = maxminCheck.front();
        maxminCheck.pop();
        maxB = max(maxB, num);
        minB = min(minB, num);
    }
    cout << maxB- minB << endl;

    while(!data.empty()){
        cout << data.front() << ' ';
        data.pop();
    }
    cout << endl;
}
