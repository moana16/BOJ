#include <bits/stdc++.h>
using namespace std;

constexpr int MOD = 1000000000;
int dp[202][202]; // dp[i][j]: i를 j개의 숫자로 만드는 경우의 수

int main() {
    int N, K;
    cin >> N >> K;

    for (int i = 0; i <= N; i++) {
        dp[i][1] = 1; 
    }
    for (int j = 1; j <= K; j++) {
        dp[0][j] = 1; 
    }

    for (int j = 2; j <= K; j++) { 
        for (int i = 1; i <= N; i++) { 
            dp[i][j] = (dp[i][j - 1] + dp[i - 1][j]) % MOD;
        }
    }

    cout << dp[N][K] << '\n';

}
