#include <bits/stdc++.h>
using namespace std;

constexpr long long DIV = 1000000000;
long long dp[101][10];

/*
dp[n][i] = n번째 자리에 i가 올 수
dp[3][3] = 3번째 자리에 3이 올 경우의 수 = 두번째 자리에 2가올 경우의 수 + 두번째 자리에 4가 올 경우의 수
*/

int main() {
    int n; cin>>n;
    fill(dp[1],dp[1]+10,1);

    for(int i=2; i<=n; i++) {
        for(int j=0; j<= 9; j++) {
            if(j!=0) dp[i][j] += dp[i-1][j-1];
            if(j!=9) dp[i][j] += dp[i-1][j+1];
            dp[i][j] %= DIV;
        }
    }
    long long ans = 0;
    for(int i=0; i<9; i++) {
        ans += dp[n][i];
    }
    ans %= DIV;
    cout<<ans;


}