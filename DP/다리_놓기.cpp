#include<bits/stdc++.h>
using namespace std;
long long dp[33][33];

int main() {
    int T; cin>>T;
    dp[0][0] = 1;
    for(int i=1; i<=30; i++) {
        dp[i][0] = 1;
        for(int j=1; j<=30; j++) {
            dp[i][j] = dp[i-1][j] + dp[i-1][j-1];
        }
    }
    while(T--) {
        int n,m; cin>>n>>m;
        cout<<dp[m][n]<<'\n';
    }
}