#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    vector<int> jumps(n+1,0);
    for(int i=1; i<=n; i++) cin>>jumps[i];

    int dp[1003];
    fill(dp, dp+n+1, INT_MAX);
    dp[1] = 0;

    queue<int> q;
    q.push(1);

    while(!q.empty()) {
        int x = q.front(); q.pop();

        for(int i=1; i<=jumps[x]; i++) {
            int nx = x + i;
            if(nx > n) continue;
            if(dp[nx] != INT_MAX) continue;
            dp[nx] = dp[x]+1;
            q.push(nx);
        }
    }

    if(dp[n] == INT_MAX) cout<<-1;
    else cout<<dp[n];

}