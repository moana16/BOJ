#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,k; cin>>n>>k;
    vector<int> coins(n);
    vector<int> dp(k + 1, INT_MAX); 

    for(int i=0; i<n; i++) {
        cin>>coins[i];
    }

    dp[0] = 0;

    for(int i=0; i<n; i++) {
        for(int j=coins[i]; j<=k; j++) {
            dp[j] = min(dp[j], dp[j-coins[i]]+1);
        }
    }
    if(dp[k] == INT_MAX) cout<<-1;
    else cout<<dp[k];
    
}