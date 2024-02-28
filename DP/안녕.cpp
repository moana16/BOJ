#include<bits/stdc++.h>
using namespace std;

int dp[103], cost[103], happy[103];

int main() {
    int N; 
    cin >> N;
    for(int i = 0; i < N; ++i) {
        cin >>cost[i];
    }
    for(int i = 0; i < N; ++i) {
        cin >>happy[i];
    }

    for(int i=0; i<N; i++) {
        for(int j=100; j>cost[i]; j--) {
            dp[j] = max(dp[j], dp[j-cost[i]]+happy[i]);
        }
    }
    cout<<dp[100];
    return 0;
}
