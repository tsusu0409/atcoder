#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

struct obj{
    int maxSize;
    int maxStart;
    int maxEnd;
    int maxChar;
    
}

int main() {
    int T; cin >> T;
    rep(t, T){
        int N; cin >> N;
        string S; cin >> S;

        // 最長の連続部分文字列探し
        int maxStart = 0;
        int maxEnd = 0;
        int maxSize = 0;
        char maxChar = '-';

        vector<> data = {};

        int cur = 0;
        while(cur<N){
            int next = cur;
            while(next<N && S[next]==S[cur]){
                next++;
            }

            int nowSize = next-cur;
            if(nowSize>maxSize){
                data = {};
                maxSize = nowSize;
                maxStart = cur;
                maxEnd = next-1;
                maxChar = S[cur];
            }
            if(nowSize==maxSize){
                maxSize = nowSize;
                maxStart = cur;
                maxEnd = next-1;
                maxChar = S[cur];
            }

            cur = next;
        }

        /*
            cout << maxSize << ' ' << maxStart << ' ' << maxEnd << ' ' << maxChar <<  endl;
        */

        ll ans = 0;
        for(int i=0; i<maxStart; i++){
            if(S[i]==maxChar) ans += 2;
            else ans ++;
        }
        for(int i=maxEnd+1; i<N; i++){
            if(S[i]==maxChar) ans += 2;
            else ans ++;
        }

        cout << ans << endl;
    }
}
