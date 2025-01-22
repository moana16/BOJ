#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    long long dp[40];
    dp[0] = 1;
    dp[1] = 1;

    for(int i=2; i<=n; i++) {
        long long tmp = 0;
        for(int j=0; j<i; j++) {
            tmp += (dp[j] * dp[i-j-1]);
        }
        dp[i] = tmp;
    }

    cout<<dp[n];
}