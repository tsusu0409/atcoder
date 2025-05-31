#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N; cin >> N;
    vector<int> A(N);
    set<int> data;
    rep(i, N){
        cin >> A[i];
        data.insert(A[i]);
    }

    vector<int> vec = {};
    for(auto i: data){
        vec.push_back(i);
    }

    int size = vec.size();
    cout << size << endl;
    rep(i, size){
        cout << vec[i];
        if(i!=size-1) cout << ' ';
        else cout << endl;
    }
}
