#include<bits/stdc++.h>
using namespace std;
int mat[1002][1002], dp[1002][1002];

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int N,M; cin>>N>>M;
    for(int i=1; i<=N; i++) {
        for(int j=1; j<=M; j++) {
            cin>>mat[i][j];
        }
    }

    dp[1][1] = mat[1][1];

    for(int i=1; i<=N; i++) {
        for(int j=1; j<=M; j++) {
            if(i == 1 && j == 1) continue;
            if(j == 1) dp[i][j] = dp[i-1][j] + mat[i][j];
            else dp[i][j] = max({dp[i-1][j], dp[i][j-1], dp[i-1][j-1]}) + mat[i][j];

        }
    }

    cout<<dp[N][M];
}