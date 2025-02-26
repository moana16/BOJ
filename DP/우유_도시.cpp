#include<bits/stdc++.h>
using namespace std;

int mat[1001][1001], dp[1001][1001];
int main() {
    int N; cin>>N;
    for(int i=1; i<=N; i++) {
        for(int j=1; j<=N; j++) {
            cin>>mat[i][j];
        }
    }

    for(int i=1; i<=N; i++) fill(dp[i], dp[i]+N+1, -1);
    dp[1][1] = mat[1][1] == 0 ? 1 : 0;

    for(int i=1; i<=N; i++) {
        for(int j=1; j<=N; j++) {
            if(i == 1 && j == 1) continue;

            int MAX = max(dp[i-1][j], dp[i][j-1]);

            if(mat[i][j] == (MAX % 3)) dp[i][j] = MAX+1;
            else dp[i][j] = MAX;
        }
    }
    
    cout<<dp[N][N];
}