#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int T; cin >> T;
    rep(t, T){
        int N; cin >> N;
        vector<ll> A(N);
        vector<ll> A_abs(N);
        bool contain_p = 0;
        bool contain_m = 0;
        set<ll> A_data;

        rep(i, N){
            cin >> A[i];
            A_abs[i] = abs(A[i]);
            if(A[i]>0) contain_p = 1;
            if(A[i]<0) contain_m = 1;
            A_data.insert(A[i]);
        }

        bool contain_pm = contain_p && contain_m;

        sort(A.begin(), A.end());
        sort(A_abs.begin(), A_abs.end());

        bool ans = 1;

        for(int i=2; i<A_abs.size(); i++){
            if((__int128_t)A_abs[i]*A_abs[0] != (__int128_t)A_abs[i-1]*A_abs[1]){
                ans = 0;
                break;
            }
        }

        if(contain_pm){
            ll first = A_abs[0];
            bool is_first_plus = 1;

            if(A_data.count(first)) is_first_plus = 1;
            else if(A_data.count(first * -1)) is_first_plus = 0;
            
            if(is_first_plus){
                rep(i, N){
                    if(i%2==0){
                        if(!A_data.count(A_abs[i])){
                            ans = 0;
                            break;
                        }
                    }
                    else{
                        if(!A_data.count(A_abs[i] * -1)){
                            ans = 0;
                            break;
                        }
                    }
                }
            }
            else{
                rep(i, N){
                    if(i%2!=0){
                        if(!A_data.count(A_abs[i])){
                            ans = 0;
                            break;
                        }
                    }
                    else{
                        if(!A_data.count(A_abs[i] * -1)){
                            ans = 0;
                            break;
                        }
                    }
                }
            }
        }
        
        if(ans) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}
