#include <bits/stdc++.h>
using namespace std;

int N;
int arr[501][501];
int dp[501][501];

/*
7
10 15
18 16 15
20 25 20 20
24 30 27 26 25
*/
int main() {
    cin>>N;
    for(int i=1; i<=N; i++) {
        for(int j=1; j<=i; j++) {
            cin>>arr[i][j];
        }
    }
    dp[1][1] = arr[1][1];
   
    for(int i=2; i<=N; i++) {
        for(int j=1; j<=i; j++) {
            dp[i][j] = max(dp[i-1][j-1],dp[i-1][j])+arr[i][j];
        }
        
    }
    cout<<*max_element(dp[N]+1, dp[N]+N+1);
}