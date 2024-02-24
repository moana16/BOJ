#include<bits/stdc++.h>
using namespace std;

int N;
vector<pair<int,int>> v;
int dp[103];

int main() {
    cin>>N;
    v.push_back({0,0});
    for(int i=1; i<=N; i++) {
        int a,b; cin>>a>>b;
        v.push_back({a,b});
    }

    sort(v.begin(), v.end());

    for(int i=1; i<=N; i++) {
        dp[i] = 1;

        for(int j=i-1; j>=1; j--) {
            if(v[i].first >= v[j].first && v[i].second >= v[j].second ) {
                dp[i] = max(dp[i], dp[j]+1);
            }
        }
    }

    cout<<N - *max_element(dp+1, dp+N+1);



}