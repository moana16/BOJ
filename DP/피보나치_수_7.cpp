#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
constexpr ll DIV = 1000000007;

int main() {
    int n; cin>>n;
    ll dp[1000003];
    dp[0] = 0 % DIV;
    dp[1] = 1 % DIV;

    for(int i=2; i<=n; i++) {
        dp[i] = (dp[i-1] + dp[i-2]) % DIV;
    }

    cout<<dp[n];
}