#include <bits/stdc++.h>
using namespace std;

int n,m;
int mat[1002][1002];
int dp[1002][1002];

int main() {
    cin>>n>>m;
    for(int i=1; i<=n; i++) {
        string s; cin>>s;
        for(int j=1; j<=m; j++) {
            mat[i][j]= s[j-1]-'0';
        }

    }
    int ans = 0;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=m; j++) {
            if(mat[i][j] == 1) {
                dp[i][j] = min({dp[i-1][j],dp[i][j-1],dp[i-1][j-1]})+1;
                ans = max(ans, dp[i][j]);
            }
        }
    }
    cout<<ans * ans;


}