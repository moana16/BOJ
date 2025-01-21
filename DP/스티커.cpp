#include<bits/stdc++.h>
using namespace std;

int main() {
    int T; cin>>T;
    while(T--) {
        int n; cin>>n;
        int mat[2][100003],dp[2][100003];

        for(int i=0; i<2; i++) {
            for(int j=0; j<n; j++) {
                cin>>mat[i][j];
            }
        }

        dp[0][0] = mat[0][0];
        dp[1][0] = mat[1][0];
        dp[0][1] = dp[1][0]+mat[0][1];
        dp[1][1] = dp[0][0]+mat[1][1];

        for(int j=2; j<n; j++) {
            dp[0][j] = mat[0][j] + max(dp[1][j-1] , dp[1][j-2]);
            dp[1][j] = mat[1][j] + max(dp[0][j-1], dp[0][j-2]);
        }
        cout<<max(dp[0][n-1], dp[1][n-1])<<'\n';


    }
}
