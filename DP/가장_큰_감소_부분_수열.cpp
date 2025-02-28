#include<bits/stdc++.h>
using namespace std;

int main() {
    int N; cin>>N;
    vector<int> v(N+1);
    for(int i=1; i<=N; i++) cin>>v[i];

    int dp[1003];
    dp[0] = 0;
    dp[1] = v[1];
    for(int i=2; i<=N; i++) {
        dp[i] = v[i];
        for(int j=1; j<i; j++) {
            if(v[i] < v[j]) dp[i] = max(dp[i], dp[j] + v[i]);
        }
    }

    cout<<*max_element(dp+1, dp+N+1);
}