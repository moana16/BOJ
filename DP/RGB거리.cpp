#include <bits/stdc++.h>
using namespace std;


constexpr int MAX = 1003;
int N;
int dp[MAX][3];
int r[MAX], g[MAX], b[MAX];

int main() {
    cin >> N;
    for(int i = 1; i <= N; i++) {
        cin>>r[i]>>g[i]>>b[i];
    }
    dp[1][0] = r[1];
    dp[1][1] = g[1];
    dp[1][2] = b[1];

    for(int i = 2; i <= N; i++) {
        dp[i][0] = min(dp[i-1][1], dp[i-1][2] ) + r[i];
        dp[i][1] = min(dp[i-1][0], dp[i-1][2] ) + g[i];
        dp[i][2] = min(dp[i-1][0], dp[i-1][1] ) + b[i];
    }

    cout<<*min_element(dp[N], dp[N]+3);

}