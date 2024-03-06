#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    int arr[100003];
    for(int i=1; i<=n; i++) cin>>arr[i];

    int dp[100003];

    for(int i=1; i<=n; i++) {
        dp[i] = max(arr[i], dp[i-1]+arr[i]);

    }
    cout<<*max_element(dp+1, dp+n+1);
}