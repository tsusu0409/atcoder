#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    string S; cin >> S;
    int N = S.size();

    long double maxPoint = 0;

    for(int i=0; i<N; i++){
        for(int j=i+2; j<N; j++){
            if(j>=N) break;
            
            if(S[i]!='t' || S[j]!='t') continue;

            long double mom = j - i - 1;
            long double sis = 0;

            for(int t=i; t<=j; t++){
                if(S[t]=='t') sis+=1;
            }
            
            long double res = (sis - 2) / mom;
            maxPoint = max(maxPoint, res);
        }
    }

    cout << fixed << setprecision(15);
    cout << maxPoint << endl;
}
