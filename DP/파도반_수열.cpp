#include<bits/stdc++.h>
using namespace std;

int main() {
    int dp[103];

    dp[1] = 1;
    dp[2] = 1;
    dp[3] = 1;

    for(int i=4; i<=100; i++) {
        dp[i] = dp[i-2] + dp[i-3];
    }

    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        cout<<dp[n]<<'\n';
    }
    
}