#include <bits/stdc++.h>
using namespace std;

int n, m; 
int coin[23];
int dp[10003];


int main() {
    int t; cin>>t;
    while(t--) {
        int ans = 0;
        fill(dp, dp+10003, 0);
        cin>>n;
        for(int i = 0; i < n; i++) cin>>coin[i];
        cin>>m;

        dp[0]=1;
        for(int i=0; i<n; i++) {
            for(int j=coin[i]; j<=m; j++) {
                dp[j] += dp[j-coin[i]];
            }
        }
        cout<<dp[m]<<'\n';


        
    }
}