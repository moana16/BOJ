#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll dp[103][21]; // i번째 까지 고려해서 만들 수 있는 수 j의 경우의 수
int main() {
    int N; cin>>N;
    vector<int> nums(N+1);
    for(int i=1; i<=N; i++) cin>>nums[i];

    dp[1][nums[1]] = 1;
    for(int i=2; i<N; i++) {
        for(int j=0; j<=20; j++) {
            if(dp[i-1][j]) {
                if(j + nums[i] <= 20) dp[i][j+nums[i]] += dp[i-1][j];
                if(j - nums[i] >= 0) dp[i][j-nums[i]] += dp[i-1][j];
            }
        }

    }

    cout<<dp[N-1][nums[N]];


}