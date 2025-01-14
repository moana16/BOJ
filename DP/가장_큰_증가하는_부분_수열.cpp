#include<bits/stdc++.h>
using namespace std;

int main() {
    int N; cin>>N;
    vector<int> v(N+1);
    int dp[1003];

    for(int i=1; i<=N; i++) {
        cin>>v[i];
        dp[i] = v[i];
    }

    
    for(int i=1; i<=N; i++) {
        for(int j=i-1; j>=1; j--) {
            if(v[i] > v[j]) dp[i] = max(dp[i], dp[j] + v[i]);
        }
    }

    cout<<*max_element(dp+1, dp+N+1);
}