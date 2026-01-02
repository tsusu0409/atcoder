#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N; cin >> N;
    stack<int> A;
    rep(i, N){
        int a; cin >> a;
        A.push(a);

        if(A.size()<4) continue;

        int A1 = A.top(); A.pop();
        int A2 = A.top(); A.pop();
        int A3 = A.top(); A.pop();
        int A4 = A.top(); A.pop();

        if(A1==A2 && A1==A3 && A1==A4) continue;
        else{
            A.push(A4);
            A.push(A3);
            A.push(A2);
            A.push(A1);
        }
    }
    cout << A.size() << endl;
}
