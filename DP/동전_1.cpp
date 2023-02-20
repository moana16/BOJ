#include <bits/stdc++.h>
using namespace std;

constexpr int N = 1e4+4;
int dp[N];

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr); cout.tie(NULL);
    
    int n,k;
    cin>>n>>k;

    int coin[n+2];
    for(int i=0; i<n; i++) {
        cin>>coin[i];
    }

    dp[0]=1;
    for(int i=0; i<n; i++) {
        for(int j=0; j<=k; j++) {
            if(j-coin[i] >= 0) dp[j] += dp[j-coin[i]];
        }
    }
    cout<<dp[k];

}