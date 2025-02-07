#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    int dp[25];
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    dp[4] = 7;

    for (int i = 5; i <= N; i++) {
        dp[i] = dp[i-1] * 2 - (i % 2 ? 0 : dp[i-4]+dp[i-5]);
    }

    cout << dp[N];
    return 0;
}
