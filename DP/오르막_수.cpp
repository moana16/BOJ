#include <bits/stdc++.h>
using namespace std;
int N;
constexpr int DIV = 10007;
long long dp[1003][10]; //i길이의 j로 끝나는 오르막 수의 개수

int main() {
    cin>>N;
    for(int i=1; i<=N; i++) {
        dp[i][0] = 1;
        for(int j=1; j<10; j++) {
            dp[i][j] = (dp[i-1][j] + dp[i][j-1]) % DIV;
        }
    }
    cout<<accumulate(dp[N],dp[N]+10, 0) % DIV;

}
