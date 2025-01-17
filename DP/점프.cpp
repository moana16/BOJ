#include <bits/stdc++.h>
using namespace std;


int main() {
    int N; cin>>N;

    int mat[103][103];
    long long dp[103][103];
    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            cin>>mat[i][j];
        }
    }

    dp[0][0] = 1;

    for(int x=0; x<N; x++) {
        for(int y=0; y<N; y++) {
            if(mat[x][y] == 0 || dp[x][y] == 0) continue;

            int cnt = mat[x][y];
            if(y + cnt < N) { // 오른쪽 점프
                dp[x][y+cnt] += dp[x][y];
            }
            if(x + cnt < N) {
                dp[x+cnt][y] += dp[x][y];
            }

        }
    }

    cout<<dp[N-1][N-1];


}