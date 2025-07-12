#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

string change_to_baseA(int A, ll N){
    string ans;
    while(N>0){
        char c = (N % A) + '0';
        ans = c + ans;
        N /= A;
    }
    return ans;
}

vector<ll> generate(ll N){
    vector<ll> res;

    // 1桁
    for(int i=1; i<=9; i++){
        if(i<=N) res.push_back(i);
    }

    string sN = to_string(N);
    int maxd = sN.size();
    // 2桁以上
    // 奇数桁
    for(int i=2; i<=(maxd+1)/2; i++){
        ll start = pow(10, i-1);
        ll end = pow(10, i) - 1;

        for(ll j=start; j<=end; j++){
            string s = to_string(j);
            string s_rev= s;
            reverse(s_rev.begin(), s_rev.end());

            for(int k=0; k<=9; k++){
                string now= s + to_string(k) + s_rev;
                if(now.size()>maxd) continue;

                ll nowNum = stoll(now);
                if(nowNum <= N) res.push_back(nowNum);
            }
        }
    }
    // 偶数桁
    for(int i=2; i<=(maxd+1)/2; i++){
        ll start = pow(10, i-1);
        ll end = pow(10, i) - 1;

        for(ll j=start; j<=end; j++){
            string s = to_string(j);
            string s_rev= s;
            reverse(s_rev.begin(), s_rev.end());

            string now= s + s_rev;
            if(now.size()>maxd) continue;

            ll nowNum = stoll(now);
            if(nowNum <= N) res.push_back(nowNum);
        }
    }

    return res;
}

int main() {
    int A; cin >> A;
    ll N; cin >> N;

    ll ans = 0;
    
    vector<ll> base10_data = generate(N);

    rep(i, base10_data.size()){
        int now = base10_data[i];
        
        string sA = change_to_baseA(A, now);
        string sA_rev = sA;
        reverse(sA_rev.begin(), sA_rev.end());

        if(sA == sA_rev){
            ans += now;
        }
    }

    cout << ans << endl;
}
