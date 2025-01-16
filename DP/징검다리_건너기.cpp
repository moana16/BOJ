#include<bits/stdc++.h>
using namespace std;

int main() {
    int N,K; cin>>N;
    vector<pair<int,int>> v(N);
    v[0] = {0,0};
    for(int i=1; i<N; i++) cin>>v[i].first>>v[i].second;
    cin>>K;

    int dp[25][2];
    memset(dp, 0x7f7f7f, sizeof(dp));

    dp[1][0] = 0;
    dp[2][0] = v[1].first;
    dp[3][0] = min(dp[2][0] + v[2].first, dp[1][0] + v[1].second);

    for(int i=4; i<=N; i++) {
        dp[i][0] = min(dp[i-2][0] + v[i-2].second, dp[i-1][0] + v[i-1].first);
        dp[i][1] = min({v[i-1].first + dp[i-1][1], v[i-2].second + dp[i-2][1], K+dp[i-3][0]});
    }

    cout<<min(dp[N][0], dp[N][1]);



}