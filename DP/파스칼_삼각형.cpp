#include<bits/stdc++.h>
using namespace std;
long long dp[35][35];
int main() {
    int r,c,w; cin>>r>>c>>w;

    dp[1][1] = 1;
    for(int i=2; i<=30; i++) {
        dp[i][1] = 1;
        for(int j=1; j<i; j++) {
            dp[i][j] = dp[i-1][j-1] + dp[i-1][j];
        }
        dp[i][i] = 1;
    }

    long long ans = 0;
    int t=1;
    for(int i=r; i<r+w; i++ ) {
        for(int j=c; j<c+t; j++) {
            ans += dp[i][j];
        }
        t++;
    }
    

    cout<<ans;
}
