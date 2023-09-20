#include <bits/stdc++.h>
using namespace std;

int N;
int dp[20];
int T[20];
int P[20];

int main() {
    cin>>N;
    for(int i=1; i<=N; i++) {
        cin>>T[i]>>P[i];
    }
    for(int i=N; i>=1; i--) {
        if(i + T[i] <= N + 1)  {
            dp[i] = max(dp[i+T[i]]+P[i], dp[i+1]);
        }
        else dp[i] = dp[i+1];
    }
    cout<<*max_element(dp+1, dp+N+1);

}