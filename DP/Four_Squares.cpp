#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    vector<int> dp(n+1, INT_MAX);
    dp[0] = 0;

    for(int i=1; i<=sqrt(n); i++) { //n 이하의 모든 제곱수 확인
        int square = i*i;
        for(int j=square; j<=n; j++) {
            if(dp[j-square] != INT_MAX) {
                dp[j] = min(dp[j], dp[j-square]+1);
            }
        }
    }
    cout<<dp[n];

}