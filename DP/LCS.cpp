#include<bits/stdc++.h>
using namespace std;

int dp[1003][1003]; // A의 앞 i개 문자와 B의 앞 j개 문자로 만들 수 있는 LCS의 길이
int main() {
    string s1, s2; cin>>s1>>s2;
    int n = s1.length();
    int m = s2.length();

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=m; j++) {
            if(s1[i-1] == s2[j-1]) dp[i][j] = dp[i-1][j-1]+1;
            else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }

    cout<<dp[n][m];
}