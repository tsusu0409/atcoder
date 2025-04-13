#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N; cin >> N;
    vector<int> A(N);
    rep(i, N){
        cin >> A[i];
    }
    vector<int> ata(N, 0);
    vector<int> haz(N, 0);
    rep(i, N){
        if(i==0){
            if(A[i]==1){
                ata[i] ++;
            }
            else{
                haz[i] ++;
            }
        }
        else{
            if(A[i]==1){
                ata[i] = ata[i-1] + 1;
                haz[i] = haz[i-1];
            }
            else{
                ata[i] = ata[i-1];
                haz[i] = haz[i-1] + 1;
            }
        }
    }

    int Q; cin >> Q;
    rep(i, Q){
        int L, R;
        cin >> L >> R;
        int a, h;
        if(L==0){
            a = ata[R-1];
            h = haz[R-1];
        }
        else{
            a = ata[R-1] - ata[L-2];
            h = haz[R-1] - haz[L-2];
        }

        if(a>h){
            cout << "win" << endl;
        }
        else if(a==h){
            cout << "draw" << endl;
        }
        else{
            cout << "lose" << endl;
        }
    }
}
