#include<bits/stdc++.h>
using namespace std;

int main() {
    int N; cin>>N;
    vector<pair<int,int>> v;

    v.push_back({0,0});

    for(int i=1; i<=N; i++) {
        int a,b; cin>>a>>b;
        v.push_back({a,b});
    }

    sort(v.begin(), v.end());

    int dp[104];
    dp[1] = 1;

    for(int i=2; i<=N; i++) {
        dp[i] = 1;
        for(int j=1; j<i; j++) {
            if(v[i].second > v[j].second) dp[i] = max(dp[i], dp[j]+1);
        }
    }

    cout<<N - *max_element(dp+1, dp+N+1);
    return 0;
}