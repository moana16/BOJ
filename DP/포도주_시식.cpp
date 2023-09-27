#include <bits/stdc++.h>
using namespace std;
int N;
int arr[10003];
long long dp[10003];


int main() {
    cin>>N;
    for(int i=1; i<=N; i++) {
        cin>>arr[i];
    }
    dp[1] = arr[1];
    dp[2] = dp[1] + arr[2];
    for(int i=3; i<=N; i++) {
        dp[i] = max({dp[i-3]+arr[i-1]+arr[i],dp[i-2]+arr[i], dp[i-1]});
    }

    cout<<dp[N];
}
