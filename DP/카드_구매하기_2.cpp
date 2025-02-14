#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> v(N + 1);
    vector<int> dp(N + 1, 1e9);

    for (int i = 1; i <= N; i++) cin >> v[i];

    dp[0] = 0; 

    for (int i = 1; i <= N; i++) { 
        for (int j = 1; j <= i; j++) {
            dp[i] = min(dp[i], dp[i - j] + v[j]);
        }
    }

    cout << dp[N];
}
