#include<bits/stdc++.h>
using namespace std;

int N; 
int dp[1000003];

int main() {
    cin>>N; 

    dp[1] = 0;
    dp[2] = 1;
    dp[3] = 1;

    for(int i=4; i<=N; i++) dp[i] = i;
    
    for(int i=4; i<=N; i++) {
        if(i%3 == 0) dp[i] = min(dp[i/3]+1,dp[i]);
        if(i%2 == 0) dp[i] = min(dp[i/2]+1,dp[i]);
        dp[i] = min(dp[i-1]+1,dp[i]);
    }
    cout<<dp[N]<<'\n';

    int cnt = dp[N];
    while(true) {
        cout<<N<<" ";
        if(N == 1) break;
        if(N % 3 == 0 && (dp[N/3]+1==dp[N])) N /= 3;
        else if(N % 2 == 0 && (dp[N/2]+1==dp[N])) N /= 2;
        else N--;
    }
    
}