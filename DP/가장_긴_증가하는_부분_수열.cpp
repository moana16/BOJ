#include<bits/stdc++.h>
using namespace std;

int main() {
    int N; cin>>N;
    vector<int> A(N+1);
    for(int i=1; i<=N; i++) cin>>A[i];

    int dp[1001];

    for(int i=1; i<=N; i++){
        dp[i] = 1;
        for(int j=i-1; j>=1; j--) {
            if(A[i] > A[j]) dp[i] = max(dp[i], dp[j]+1);
        }
    }

    cout<<*max_element(dp+1, dp+N+1);
}