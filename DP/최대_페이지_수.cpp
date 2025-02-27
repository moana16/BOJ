#include<bits/stdc++.h>
using namespace std;

int main() {
    int N,M; cin>>N>>M;
    vector<int> dp(N+1, 0);

    for(int i=0; i<M; i++) {
        int days, pages; cin>>days>>pages;

        for(int d = N; d >= days; d--) {
            dp[d] = max(dp[d], dp[d-days] + pages);
        }
    }
    cout<<dp[N];
}