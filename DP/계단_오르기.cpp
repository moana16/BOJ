#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll dp[303];
int main() {
    int n; cin>>n;
    vector<ll> points(n+1);
    for(int i=1; i<=n; i++) cin>>points[i];

    dp[1] = points[1];
    dp[2] = points[1] + points[2];
    dp[3] = max(points[3] + points[1], points[3] + points[2]);

    for(int i=4; i<=n; i++) {
        dp[i] = max(points[i]+dp[i-2], dp[i-3] + points[i-1] + points[i]);
    }
    cout<<dp[n];
    
}