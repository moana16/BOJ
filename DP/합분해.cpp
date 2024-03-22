#include<bits/stdc++.h>
using namespace std;

int dp[202][202];
const int MOD = 1000000000;
int N,K;

int main() {
    cin>>N>>K;

    for(int i=0; i<=N; i++) dp[i][1] = 1;

    for(int j=1; j<=K; j++) {
        for(int i=0; i<=N; i++) {
            for(int t=0; t<=i; t++) {
                dp[i][j] = (dp[i][j] + dp[i-t][j-1] ) % MOD;
            }
        }
    }

    cout<<dp[N][K] %MOD;



}