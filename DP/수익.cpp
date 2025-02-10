#include<bits/stdc++.h>
using namespace std;
long long dp[250005];

int main() {
    while(true) {
        int N; cin>>N;
        if(N == 0) break;
        vector<long long> profits(N+1);
        for(int i=1; i<=N; i++) cin>>profits[i];

        dp[1] = profits[1];

        for(int i=2; i<=N; i++) {
            dp[i] = max(dp[i-1]+profits[i], profits[i]);
        }

        cout<<*max_element(dp+1, dp+N+1)<<'\n';
    }
    

}