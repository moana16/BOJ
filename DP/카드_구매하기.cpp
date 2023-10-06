#include <bits/stdc++.h>
using namespace std;

int N;
int dp[1001];

int main() {
    cin>>N;
    for(int i=1;i<=N;i++) cin>>dp[i];
    for(int i=1; i<=N; i++) {
        for(int j=1; j<i; j++) {
            dp[i] = max(dp[i-j]+dp[j],dp[i]);
        }
    }
    
    cout<<dp[N];
}

    
//dp[3] = d[2]+dp[1] , arr[3] 중 큰 값