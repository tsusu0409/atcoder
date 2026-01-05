#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int sum_de(int num){
    int ans = 0;
    while(num > 0){
        int digit = num % 10;
        ans += digit * digit;
        num /= 10;
    }
    return ans;
}

int main() {
    int N; cin >> N;
    set<int> seen;
    
    while(N != 1 && seen.find(N) == seen.end()){
        seen.insert(N);
        N = sum_de(N);
    }
    
    if(N == 1) cout << "Yes" << endl;
    else cout << "No" << endl;
}