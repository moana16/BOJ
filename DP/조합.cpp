#include<bits/stdc++.h>
using namespace std;

typedef vector<int> BigInt;
BigInt dp[103][103];

BigInt add(BigInt a, BigInt b) {
    BigInt res;
    int carry = 0,sum = 0;
    int size = max(a.size(), b.size());

    for(int i=0; i<size || carry; i++) {
        if(i < a.size()) sum += a[i];
        if(i < b.size()) sum += b[i];
        sum += carry;
        res.push_back(sum%10);
        carry = sum / 10;
        sum = 0;
    }
    return res;
}


int main() {
    int n,m; cin>>n>>m;
    
    dp[0][0] = {1};
    for(int i=1; i<=100; i++) {
        dp[i][0] = {1};
        for(int j=1; j<=100; j++) {
            dp[i][j] = add(dp[i-1][j], dp[i-1][j-1]);
        }
    }

    BigInt res = dp[n][m];
    for(auto it = res.rbegin(); it != res.rend(); it++) cout<<*it;
}