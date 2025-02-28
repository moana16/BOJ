#include<bits/stdc++.h>
using namespace std;

int main() {
    int N; cin>>N;

    vector<int> L(N+1), J(N+1);
    for(int i=1; i<=N; i++) cin>>L[i];
    for(int i=1; i<=N; i++) cin>>J[i];

    int strength = 100;
    int dp[103] = {0};
    dp[100] = 0;
    for(int i=1; i<=N; i++) {
        for(int j=100; j>L[i]; j--) {
            dp[j] = max(dp[j], dp[j-L[i]] + J[i]);
        }
    }

    cout<<dp[100];
}