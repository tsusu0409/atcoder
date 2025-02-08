#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    vector<int> A(3);
    cin >> A.at(0) >> A.at(1) >> A.at(2);
    
    int tmp = max(A.at(0), A.at(1));
    int min1 = min(A.at(0), A.at(1));
    int min2 = min(tmp, A.at(2));
    int max1 = max(tmp, A.at(2));

    if(max1 == min1 * min2){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}
