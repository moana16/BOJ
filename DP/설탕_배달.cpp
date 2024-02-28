#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int n; cin>>n;
    long long dp[5005];

    memset(dp, -1, sizeof(dp));

    dp[3] = 1;
    dp[5] = 1;

    for(int i=6; i<=n; i++) {
        if(i % 5 == 0) dp[i] = dp[i-5]+1;
        else if(i % 3 == 0) dp[i] = dp[i-3]+1;
        else {
            if(min(dp[i-3], dp[i-5]) == -1) dp[i] = -1;
            else dp[i] = min(dp[i-3], dp[i-5])+1;
        }

    }

    cout<<dp[n];

}