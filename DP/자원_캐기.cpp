#include<bits/stdc++.h>
using namespace std;

int main() {
    int N,M; cin>>N>>M;
    int mat[303][303], dp[303][303];

    for(int i=1; i<=N; i++) {
        for(int j=1; j<=M; j++) {
            cin>>mat[i][j];
        }
    }

    dp[1][1] = mat[1][1];

    for(int i=1; i<=N; i++) {
        for(int j=1; j<=M; j++) {
            if(i == 1 && j == 1) continue;
            dp[i][j] = max(dp[i-1][j],dp[i][j-1])+ mat[i][j];
        }
    }

    cout<<dp[N][M];
}