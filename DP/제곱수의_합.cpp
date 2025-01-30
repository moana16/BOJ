#include<bits/stdc++.h>
using namespace std;

int dp[100005];

int main() {
    int N; cin>>N;

    int MAX = (int)sqrt(100000);

    for(int i=1; i<=MAX; i++) {
        dp[i*i] = 1;
    }

    for(int i=2; i<=N; i++) {
        dp[i] = dp[i-1]+1;
        for(int j=1; j*j<=i; j++) {
            dp[i] = min(dp[i-j*j]+ 1, dp[i]);
        }
    }

    cout<<dp[N];

}