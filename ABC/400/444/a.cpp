#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N; cin >> N;
    int a, b, c;
    a = N / 100; N %= 100;
    b = N / 10; N %= 10;
    c = N;

    if(a==b && b == c){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}
