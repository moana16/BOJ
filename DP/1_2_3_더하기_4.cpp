#include<bits/stdc++.h>
using namespace std;

int dp[10001][4];


int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int T; cin>>T;

    for(int i=0; i<=10000; i++) {
        dp[i][1] = 1;
    }
    for(int i=2; i<=10000; i++) {
        dp[i][2] = dp[i-2][1] + dp[i-2][2];
    }
    for(int i=3; i<=10000; i++) {
        dp[i][3] = dp[i-3][1] + dp[i-3][2] + dp[i-3][3];
    }

    while(T--) {
        int n; cin>>n;
        cout<<dp[n][1] + dp[n][2] + dp[n][3]<<'\n';;

    }
}