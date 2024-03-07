#include<bits/stdc++.h>
using namespace std;
int N; 
vector<pair<int,int>> v;
int dp[1500005];

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    cin>>N;
    v.push_back({0,0});
    for(int i=0; i<N; i++){
        int t,p; cin>>t>>p;
        v.push_back({t,p});
    }
    

    for(int i=N; i>=1; i--) {
        if(i + v[i].first > N + 1) dp[i] = dp[i+1];
        else dp[i] = max(dp[i+1], dp[i+v[i].first] + v[i].second);
    }

    cout<<dp[1];
}