#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int N; cin>>N;
    vector<int> v(N+1);
    for(int i=1; i<=N; i++) cin>>v[i];

    int dp[1003];
    dp[1] = v[1];

    for(int i=2; i<=N; i++) {
        dp[i] = v[i];
        for(int j=1; j<i; j++) {
            if(dp[i] > dp[j]) dp[i] = max(dp[j]+v[i], dp[i]);
        }
    }

    cout<<*max_element(dp+1, dp+N+1);
}