#include<bits/stdc++.h>
using namespace std;
int dp[100003];
constexpr int INF = 1e9;
int main() {
    int N,M; cin>>N>>M;
    vector<int> v(M);
    for(int i=0; i<M; i++) {
        cin>>v[i];
    }

    fill(dp, dp+N+1, INF);
    dp[0] = 0;

    for(int i=0; i<M; i++) {
        for(int j=v[i]; j<=N; j++) {
            dp[j] = min(dp[j], dp[j-v[i]]+1);
        }
    }

    for(int i=0; i<M; i++) {
        for(int j=i+1; j<M; j++) {
            int sum = v[i] + v[j];
            if(sum <= N){
                for(int k=sum; k<=N; k++) dp[k] = min(dp[k], dp[k-sum]+1);
            }
        }
    }

    if(dp[N]==INF) cout<<-1;
    else cout<<dp[N];
    
}