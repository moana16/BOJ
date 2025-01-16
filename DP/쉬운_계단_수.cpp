#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    int N; cin>>N;

    ll dp[103][103];

    for(int i=1; i<=9; i++) {
        dp[1][i] = 1;
    }

    for(int i=2; i<=N; i++) {
        for(int j=0; j<=9; j++) {
            if(j > 0) dp[i][j] += dp[i-1][j-1];
            if(j < 9) dp[i][j] += dp[i-1][j+1];
            dp[i][j] %= 1000000000;
        }
    }

    ll res = 0;
    for(int j=0; j<=9; j++) {
        res = (res + dp[N][j]) % 1000000000;
    }

    cout<<res;
}
