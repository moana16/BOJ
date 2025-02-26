#include<bits/stdc++.h>
using namespace std;

int dp[1003][17][17]; //i번째 선수까지 고려했을 때, 벡팀을 w명, 흑팀을 b명 선택했을 때의 최대 점수
int main() {
    int w,b;
    vector<pair<int,int>> v;
    while(cin>>w>>b) {
        v.push_back({w,b});
    }

    int n = v.size();
    memset(dp, 0, sizeof(dp));
    for(int i=0; i<n; i++) {
        int w_score = v[i].first;
        int b_score = v[i].second;

        for(int w=15; w>=0; w--) {
            for(int b=15; b>=0; b--) {
                if(w > 0){
                    dp[i+1][w][b] = max(dp[i+1][w][b], dp[i][w-1][b] + w_score);
                }
                if(b > 0) {
                    dp[i+1][w][b] = max(dp[i+1][w][b], dp[i][w][b-1] + b_score);
                }
                dp[i+1][w][b] = max(dp[i+1][w][b], dp[i][w][b]);
            }
        }

    }

    cout<<dp[n][15][15];

}