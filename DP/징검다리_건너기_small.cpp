#include<bits/stdc++.h>
using namespace std;

int main() {
    int N,K; cin>>N>>K;
    vector<int> v(N+1);
    v[0] = 0;
    for(int i=1; i<=N; i++) cin>>v[i];

    int dp[5002] = {0};
    dp[1] = 1;


    for(int i=1; i<=N; i++) {
        if(dp[i] == 0) continue;
        for(int j=i+1; j<=N; j++) {
            int tmp = (j-i) *(1 + abs(v[i] - v[j]));
            if(tmp <= K) dp[j] = dp[i-1] + 1;
        }
    }
    string ans = dp[N] == 0 ? "NO" : "YES";
    cout<<ans;
    

}

