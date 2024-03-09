#include<bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> w(N+1), v(N+1);
    vector<vector<int>> dp(N+1, vector<int>(K+1, 0));

    for (int i = 1; i <= N; i++) {
        cin >> w[i] >> v[i]; 
    }

    for (int i = 1; i <= N; i++) {
        for (int j = 0; j <= K; j++) {
            if (j < w[i]) dp[i][j] = dp[i-1][j];
            else dp[i][j] = max(dp[i-1][j], dp[i-1][j-w[i]] + v[i]);
        }
    }

    cout << dp[N][K];

    return 0;
}
