#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N, Q; cin >> N >> Q;
    vector<int> A(N);
    rep(i, N) cin >> A[i];

    sort(A.begin(), A.end());

    rep(q, Q){
        ll x, y; cin >> x >> y;
        ll left = x;
        ll right = x + y + N;

        while(left < right){
            ll mid = (left + right) / 2;
            auto index1 = lower_bound(A.begin(), A.end(), x);
            auto index2 = lower_bound(A.begin(), A.end(), mid + 1);
            int no_exist = (mid - x + 1) - (index2 - index1);

            if(no_exist >= y) right = mid;
            else left = mid + 1;
        }

        cout << left << endl;
    }
}
