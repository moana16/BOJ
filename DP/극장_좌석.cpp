#include <bits/stdc++.h>
using namespace std;
int N,M;
int dp[43];
int ans = 1;
int idx = 0;

int main() {
    cin>>N;
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 2;
    for(int i=3; i<=N; i++) {
        dp[i] = dp[i-1]+dp[i-2];

    }
    cin>>M;
    while (M--) {
        int t; cin>>t;
        ans *= dp[t-idx - 1];
        idx = t;
    }
    if(idx < N) {
            ans *= dp[N-idx];
        }
    cout<<ans;
    


}