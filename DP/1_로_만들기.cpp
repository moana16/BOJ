#include<bits/stdc++.h>
using namespace std;


int main() {
    int n; cin>>n;
    int dp[1000005];

    dp[1] = 0;
    dp[2] = 1;
    dp[3] = 1;

    for(int i=4; i<=n; i++) dp[i] = i;
    
    for(int i=4; i<=n; i++) {
        if(i%3 == 0) dp[i] = min(dp[i/3]+1,dp[i]);
        if(i%2 == 0) dp[i] = min(dp[i/2]+1,dp[i]);
        dp[i] = min(dp[i-1]+1,dp[i]);
    }
    cout<<dp[n];

}