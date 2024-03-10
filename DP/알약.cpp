#include<bits/stdc++.h>
using namespace std;

int main() {
    long long dp[33];
    dp[0] = 1;

    for(int i=1; i<=30; i++) {
        dp[i] = 0;
        for(int j=0; j<i; j++) 
            dp[i] += dp[j] * dp[i-j-1];
    }

    while(true) {
        int n; cin>>n;
        if(n == 0) break;
        cout<<dp[n]<<'\n';
    }
}