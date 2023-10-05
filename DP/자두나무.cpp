#include <bits/stdc++.h>
using namespace std;

int T,W;
int arr[1003];
int dp[1003][32][3];
int ans = 0;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    cin>>T>>W;
    for(int i=1; i<=T; i++) cin>>arr[i];
    for(int i=1; i<=T; i++) {
        //1번 나무에서 이동하지 않을 경우
        dp[i][0][1] = dp[i-1][0][1] + (arr[i]== 1 ? 1 : 0);
        for(int j=1; j<=W; j++) {
            if(i<j) break;
            if(arr[i] == 1) {
                dp[i][j][1] = max(dp[i-1][j-1][2], dp[i-1][j][1])+1;
                dp[i][j][2] = max(dp[i-1][j-1][1],dp[i-1][j][2]);
            }
            else {
                dp[i][j][1] = max(dp[i-1][j-1][2], dp[i-1][j][1]);
                dp[i][j][2] = max(dp[i-1][j-1][1],dp[i-1][j][2])+1;

            }
        }
        for(int j=0; j<=W;j++) {
            ans = max({ans, dp[T][j][1], dp[T][j][2]});
        }
    }
    cout<<ans;




}

