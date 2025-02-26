#include<bits/stdc++.h>
using namespace std;

constexpr long long DIV = 1000000007;
long long dp[1000004], sum[1000004];

int main() {
    int N; cin>>N;
    dp[0] = 1;
    dp[1] = 2;
    dp[2] = 7;
    sum[0] = 1;
    sum[1] = 3;
    sum[2] = 10;

    for(int i=3; i<=N; i++) {
        dp[i] = (2 * dp[i-1] + dp[i-2] + 2 * sum[i-2]) % DIV;
        sum[i] = (sum[i-1] + dp[i]) % DIV;
    }
    cout<<dp[N];
}