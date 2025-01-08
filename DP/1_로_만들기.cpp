#include<bits/stdc++.h>
using namespace std;
int dp[1000005];

int main() {
    int N; cin>>N;

    dp[1] = 0;
    dp[2] = 1;
    dp[3] = 1;

    for(int i=4; i<=N; i++) dp[i] = i;

    for(int i=4; i<=N; i++) {
        if(i%3 == 0) dp[i] = min(dp[i], dp[i/3] + 1);
        if(i%2 == 0) dp[i] = min(dp[i], dp[i/2] + 1);
        dp[i] = min(dp[i-1]+1, dp[i]); 
    }


    cout<<dp[N];

}