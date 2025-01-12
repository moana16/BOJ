#include<bits/stdc++.h>
using namespace std;

int main() {
    int T; cin>>T;
    long long dp[70][10] = {0};

    for(int j=0; j<=9; j++) {
        dp[1][j] = 1;
    }

    for(int i=2; i<=64; i++) {
        for(int j=0; j<=9; j++) {
            dp[i][j] = dp[i-1][j];
            if(j > 0) {
                dp[i][j] += dp[i][j-1];
            }
        }
    }
    while(T--) {
        int n; cin>>n;
        long long res = 0;
        for(int j=0; j<=9; j++) res += dp[n][j];
        cout<<res<<'\n';

    }
}