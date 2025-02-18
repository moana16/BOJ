#include<bits/stdc++.h>
using namespace std;
const int MOD = 1000000;
int main() {
    string password; cin>>password;

    if(password[0] == '0') {
        cout<<0;
        return 0;
    }

    int n = password.size();

    int dp[5005]={0};

    dp[0] = 1;
    dp[1] = 1;

    for(int i=2; i<=n; i++) {
        int oneDigit = password[i - 1] - '0';             // 한 자리 숫자
        int twoDigit = (password[i - 2] - '0') * 10 + oneDigit;  // 두 자리 숫자

        if(oneDigit >= 1) dp[i] = (dp[i] + dp[i-1]) % MOD;
        if(10 <= twoDigit && twoDigit <= 26) dp[i] = (dp[i] + dp[i-2]) % MOD;
    }

    cout<<dp[n];

}