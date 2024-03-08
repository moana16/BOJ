#include<bits/stdc++.h>
using namespace std;

int C,N;
vector<pair<int,int>> v;
int dp[1105];

int main() {
    cin>>C>>N;
    for(int i=0; i<N; i++) {
        int cost, peoples;
        cin>>cost>>peoples;
        v.push_back({cost, peoples});
    }

    memset(dp, 0x7f7f7f, sizeof(dp));

    dp[0] = 0;

    for(int i=0; i<N; i++) {
        for(int j=v[i].second; j<=C+100; j++) {
            dp[j] = min(dp[j], dp[j-v[i].second] + v[i].first);
        }
    }

    int ans = 0x7f7f7f;

    for(int i=C; i<=C+100; i++) {
        ans = min(ans, dp[i]);
    }

    cout<<ans;

}