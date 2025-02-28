#include<bits/stdc++.h>
using namespace std;
constexpr int MAX = 1e6;
int mat[1003][1003];
int dp[1003][1003][3]; // 0 : 오른쪽 대각선(i-1, j+1), 1 : 아래(i-1, j), 2 : 왼쪽 대각선(i-1, j-1)
int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int N,M; cin>>N>>M;
    for(int i=1; i<=N; i++) {
        for(int j=1; j<=M; j++) {
            cin>>mat[i][j];
        }
    }

    // dp 배열을 MAX 값으로 초기화
    for(int i = 0; i <= N; i++) {
        for(int j = 0; j <= M; j++) {
            for(int r = 0; r < 3; r++) {
                dp[i][j][r] = MAX;
            }
        }
    }

    for(int j=1; j<=M; j++) {
        for(int r=0; r<3; r++) {
            dp[1][j][r] = mat[1][j];
        }
    }

    for(int i=2; i<=N; i++) {
        for(int j=1; j<=M; j++) {
            if(j < M) dp[i][j][0] = min(dp[i-1][j+1][1], dp[i-1][j+1][2]) + mat[i][j];
            dp[i][j][1] = min(dp[i-1][j][0], dp[i-1][j][2]) + mat[i][j];
            if(j > 1) dp[i][j][2] = min(dp[i-1][j-1][0], dp[i-1][j-1][1]) + mat[i][j];
        }
    }



    int ans = MAX;
    for(int j=1; j<=M; j++) {
        for(int r=0; r<3; r++) {
            ans = min(ans, dp[N][j][r]);
        }
    }

    cout<<ans;

}