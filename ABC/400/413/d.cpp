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
<<<<<<< HEAD
        bool contain_p = 0;
        bool contain_m = 0;

        rep(i, N){
            cin >> A[i];
            if(A[i]>0) contain_p = 1;
            if(A[i]<0) contain_m = 1;
=======
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
>>>>>>> 1be9a66c87a3c70a61f49c229aa5166be19eb411
        }

        bool contain_pm = contain_p && contain_m;

        sort(A.begin(), A.end());
<<<<<<< HEAD

        bool ans = 1;
        if(!contain_pm){
            for(int i=2; i<A.size(); i++){
                if(A[i]*A[0] != A[i-1]*A[1]){
                    ans = 0;
                    break;
                }
            }
        }
        else{
            int m_start = 0;
            int p_start = A.size()-1;

            char start = '0';
            if(abs(A[m_start]>abs(A[p_start]))) start = 'm';
            else if(abs(A[m_start]<abs(A[p_start]))) start = 'p';
            else ans = 0;

            if(start=='m'){
                int m = 1;
                int p = A.size()-1;
                char next_check = m;
                while(m<p){
                    if(next_check == 'm'){
                        if(A[m]*A[m_start] == A[p]*A[p_start]){
                            ans = 0;
                            break;
                        }
                        p--;
                        next_check = 'p';
                    }
                    else{
                        if(A[p]*A[m_start] == A[m]*A[p_start]){
                            ans = 0;
                            break;
                        }
                        m++;
                        next_check = 'm';
                    }
                }
            }

            if(start=='p'){
                int m = 0;
                int p = A.size()-2;
                char next_check = p;
                while(m<p){
                    if(next_check == 'm'){
                        if(A[m]*A[p_start] == A[p]*A[m_start]){
                            ans = 0;
                            break;
                        }
                        p--;
                        next_check = 'p';
                    }
                    else{
                        if(A[p]*A[p_start] == A[m]*A[m_start]){
                            ans = 0;
                            break;
                        }
                        m++;
                        next_check = 'm';
=======
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
>>>>>>> 1be9a66c87a3c70a61f49c229aa5166be19eb411
                    }
                }
            }
        }
        
        if(ans) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}
