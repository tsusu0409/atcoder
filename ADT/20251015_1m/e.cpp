#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N; cin >> N;

    stack<int> s;
    rep(i, N){
        int a; cin >> a;
        s.push(a);

        while(1){
            if(s.size()==1) break;

            int one = s.top(); s.pop();
            int two = s.top(); s.pop();

            if(one!=two){
                s.push(two);
                s.push(one);
                break;
            }
            else{
                one++;
                s.push(one);
            }
        }
    }
    cout << s.size() << endl;
}
