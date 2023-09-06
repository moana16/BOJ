#include <bits/stdc++.h>
using namespace std;

constexpr int MAX = 1e5+3;
int N;
int arr[MAX];
int dp[MAX];

int main() {
    cin>>N;
    for(int i=1; i<=N; ++i) {
        cin>>arr[i];
        dp[i] = arr[i];
    }

    for(int i=1; i<=N; ++i) {
        dp[i] = max(dp[i], dp[i-1] + arr[i]);
    }
    cout<<*max_element(dp+1, dp+N+1);

}