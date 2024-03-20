#include<bits/stdc++.h>
using namespace std;

int n;
int main() {
    cin>>n;
    int dp[100003];
    memset(dp, -1, sizeof(dp));
    dp[2] = 1;
    dp[4] = 2;
    dp[5] = 1;
    dp[0] = 0;

    for(int i=6; i<=n; i++) {
       if(dp[i-5] != -1) dp[i] = dp[i-5]+1;
       if(dp[i-2] != -1) {
        if(dp[i] == -1) dp[i] = dp[i-2]+1;
        else dp[i] = min(dp[i-2]+1, dp[i]);
       }
    }


    cout<<dp[n];
}