#include<bits/stdc++.h>
using namespace std;

int main() {
    int N,K; cin>>N>>K;

    vector<int> dp(K+1, 0);

    for(int i=0; i<N; i++) {
        int w,v; cin>>w>>v;

        for(int weight = K; weight >= w; weight--) {
            dp[weight] = max(dp[weight], dp[weight - w] + v);
        }
    }
    
    cout<<dp[K];
}
