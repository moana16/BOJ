#include <bits/stdc++.h>
using namespace std;

int arr[5005];
int dp[5005];
constexpr int mod = 1000000;

//범위는 1~26
int main() {
    string s; cin>>s;
    int n = s.length();
    if(s[0] == '0') {
        cout<<0;
        return 0;

    }
    for(int i=1; i<=n;i++) {
        arr[i] = s[i-1]-'0';
    }
    dp[0] = 1;
    for(int i=1; i<=n; i++) {
        if(arr[i] > 0) dp[i] = (dp[i] + dp[i-1]) % mod;
        int x = arr[i-1]*10 + arr[i];
        if(x >= 10 && x <= 26) dp[i] = (dp[i] + dp[i-2]) % mod;

    }
    cout<<dp[n];    


}