#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

bool isOK(const vector<int> &a, int index, int key) {
    if (a[index] >= key) return true;
    else return false;
}

int main() {
    int N, A, B; cin >> N >> A >> B;
    string S; cin >> S;

    vector<int> Asum(N, 0);
    vector<int> Bsum(N, 0);

    if(S[0]=='a') Asum[0] = 1;
    else Bsum[0] = 1;

    rep(i, N){
        if(i==0) continue;
        
        if(S[i]=='a'){
            Asum[i] = Asum[i-1] + 1;
            Bsum[i] = Bsum[i-1];
        }
        else{
            Asum[i] = Asum[i-1];
            Bsum[i] = Bsum[i-1] + 1;
        }
    }

    int ans = 0;
    rep(l, N){
        int left = l-1;
        int base = Asum[l-1];
        int right = N;
        while(right-left > 1){
            int mid = left + (right - left) / 2;

            if (Asum[mid] - base >= A) right = mid;
            else left = mid;
        }
        // left は条件を満たさない最大の値、right は条件を満たす最小の値
        int nowA =  right;

        left = l-1;
        base = Bsum[l-1];
        right = N;
        while(right-left > 1){
            int mid = left + (right - left) / 2;

            if (Bsum[mid] - base >= B) right = mid;
            else left = mid;
        }
        // left は条件を満たさない最大の値、right は条件を満たす最小の値
        int nowB = right;

        ans += max(0, nowB-nowA);
    }

    cout << ans << endl;
}
