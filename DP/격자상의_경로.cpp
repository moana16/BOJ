#include<bits/stdc++.h>
using namespace std;

int main() {
    int N,M,K;
    cin>>N>>M>>K;

    vector<vector<int>> dp(N + 1, vector<int>(M + 1, 0));
    dp[1][1] = 1;

    for(int i=1; i<=N; i++) {
        for(int j=1; j<=M; j++) {
            if(i == 1 && j == 1) continue;
            dp[i][j] = dp[i-1][j] + dp[i][j-1];
        }
    }

    if(K > 0) {
        int x = (K-1)/M + 1;
        int y = (K-1)%M + 1;

        int pathTo = dp[x][y];

        dp = vector<vector<int>>(N+1, vector<int>(M+1, 0));
        dp[x][y] = 1;
        for(int i=x; i<=N;i++) {
            for(int j=y; j<=M; j++) {
                if(i == x && j == y) continue;
                dp[i][j] = dp[i-1][j] + dp[i][j-1];
            }
        }

        int pathFrom = dp[N][M];
        cout<<pathTo * pathFrom;
    }
    else cout<<dp[N][M];


}