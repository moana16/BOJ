#include <bits/stdc++.h>
using namespace std;

constexpr int MAX = 1e5+3;
int N, M;
int arr[MAX];
int dp[MAX];

vector<pair<int,int>> v;
int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    cin>>N>>M;
 
    for(int i=0; i<N; i++) cin>>arr[i];
    for(int i=0; i<M; i++) {
        int x,y; cin>>x>>y;
        v.push_back({x,y});
    }
    dp[0] = 0;
    for(int i=1; i<=N; i++) {
        dp[i] = dp[i-1] + arr[i-1];
    }
    for(int i=0; i<M; i++) {
        int x = v[i].first;
        int y = v[i].second;
        cout<<dp[y]-dp[x-1]<<'\n';

    }
    
}