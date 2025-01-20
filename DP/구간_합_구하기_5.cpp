#include<bits/stdc++.h>
using namespace std;
int mat[1050][105], dp[1050][1050];

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int N,M; cin>>N>>M;
    for(int i=1; i<=N; i++) {
        dp[i][0] = 0;
        for(int j=1; j<=N; j++) {
            cin>>mat[i][j];
            dp[i][j] = dp[i-1][j] + dp[i][j-1] - dp[i-1][j-1] + mat[i][j];
        }
    }

    int x1,y1,x2,y2;

    for(int i=0; i<M; i++) {
        cin>>x1>>y1>>x2>>y2;
        cout<<dp[x2][y2] - dp[x2][y1-1] + dp[x1-1][y1-1] - dp[x1-1][y2]<<'\n';

    }
}