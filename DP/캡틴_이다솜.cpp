#include<bits/stdc++.h>
using namespace std;

constexpr int INF = 1e9;

int main() {
    int N; cin>>N;
    vector<int> tetrahedron;


    for(int i=1, sum = 0; sum<=N; i++) {
        sum += (i * (i+1))/2;
        if(sum > N) break;
        tetrahedron.push_back(sum);
    }

    int dp[N+1]; // i개의 대포알로 만들수 있는 사면체의 최소 개수
    fill(dp, dp+N+1, INF);

    dp[0] = 0;
    for(auto t : tetrahedron) {
        for(int i=t; i<=N; i++) {
            dp[i] = min(dp[i], dp[i-t]+1);
        }
    }

    cout<<dp[N];

}