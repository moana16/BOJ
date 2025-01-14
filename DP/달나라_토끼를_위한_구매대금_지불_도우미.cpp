#include<bits/stdc++.h>
using namespace std;

int dp[100003] = {0};

int main() {
    int N; cin>>N;
    dp[1] = 1;
    dp[2] = 1;
    dp[5] = 1;
    dp[7] = 1;

    for(int i=3; i<=N; i++) {
        if(dp[i] == 1) continue;
        if(i < 5) dp[i] = min({dp[i-1], dp[i-2] }) + 1;
        else if(i < 7) dp[i] = min({dp[i-1], dp[i-2], dp[i-5] }) + 1;
        else {
            dp[i] = min({dp[i-1], dp[i-2], dp[i-5], dp[i-7]}) + 1;
        }
    }

    cout<<dp[N];

}