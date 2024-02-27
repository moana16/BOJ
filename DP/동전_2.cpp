#include<bits/stdc++.h>
using namespace std;

int n,k;
vector<int> coin;
int dp[10003];

int main() {
    cin>>n>>k;
    for(int i=0; i<n; i++) {
        int x; cin>>x;
        coin.push_back(x);
    }

    fill(dp, dp+k+1, 1e9);
    dp[0] = 0;

    for(int i=0; i<n; i++) {
        for(int j=coin[i]; j<=k; j++) {
            dp[j] = min(dp[j], dp[j-coin[i]]+1);
        }
    }

    if(dp[k] == 1e9) cout<<-1;
    else cout<<dp[k];

}