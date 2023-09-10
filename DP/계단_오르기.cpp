#include <bits/stdc++.h>
using namespace std;

int arr[303];
int dp[303];

// 1칸 10 30 or 25
// 2칸 0 무조건 20

// 계단은 한 번에 한 계단씩 또는 두 계단씩 오를 수 있다. 즉, 한 계단을 밟으면서 이어서 다음 계단이나, 다음 다음 계단으로 오를 수 있다.
// 연속된 세 개의 계단을 모두 밟아서는 안 된다. 단, 시작점은 계단에 포함되지 않는다.
// 마지막 도착 계단은 반드시 밟아야 한다.

int main() {
    int n; cin>>n;
    arr[0] = 0;
    for(int i=1; i<= n; i++) {
        cin>>arr[i];
    }
    dp[1] = arr[1];
    dp[2] = arr[1] + arr[2];
    dp[3] = max(arr[1]+arr[3], arr[2]+arr[3]);
    for(int i=4; i<= n; i++) {
        dp[i] = max(dp[i-2]+arr[i],dp[i-3]+arr[i-1]+arr[i]); 
    }
    cout<<dp[n];
}