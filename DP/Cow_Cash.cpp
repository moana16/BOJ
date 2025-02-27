#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll dp[10005]; // dp[i] = 여러 동전을 이용해 i원을 만드는 경우의 수
int main() {
    int V,N; cin>>V>>N;
    
    dp[0] = 1;

    for(int i=0; i<V;i++) {
        int coin; cin>>coin;

        for(int j=coin; j <= N; j++){
            dp[j] += dp[j-coin];
        }
    }

    cout<<dp[N];
}   


