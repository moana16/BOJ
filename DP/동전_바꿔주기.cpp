#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T, k;
    cin >> T >> k;
    vector<vector<int>> coin(k, vector<int>(2));
    for (int i = 0; i < k; i++) {
        cin >> coin[i][0] >> coin[i][1]; // 각 동전의 가치와 개수 입력
    }

    vector<int> dp(T + 1, 0);
    dp[0] = 1; 

    for (int i = 0; i < k; i++) {
        int p = coin[i][0], n = coin[i][1];
        
        for (int j = T; j >= p; j--) {
            for (int c = 1; c <= n && c * p <= j; c++) {
                dp[j] += dp[j - c * p];
            }
        }
    }

    cout << dp[T];
    return 0;
}
