#include<bits/stdc++.h>
using namespace std;

int N;
int mat[104][104];
long long dp[104][104];

int main() {
    cin >> N;
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) cin >> mat[i][j];
    }

    dp[0][0] = 1;

    for(int x = 0; x < N; x++) {
        for(int y = 0; y < N; y++) {
            if(mat[x][y] == 0 || dp[x][y] == 0) continue; // 이동할 수 없거나 경로가 없는 경우
            int jump = mat[x][y];
            if(x + jump < N) dp[x + jump][y] += dp[x][y]; // 아래쪽으로 점프
            if(y + jump < N) dp[x][y + jump] += dp[x][y]; // 오른쪽으로 점프
        }
    }

    cout << dp[N-1][N-1];
    return 0;
}
