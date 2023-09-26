#include <bits/stdc++.h>
using namespace std;

int N,M;
int arr[2002];
int dp[2002][2002];

int main() {
    ios::sync_with_stdio(0);cin.tie(0);

    cin>>N;
    for(int i=1; i<=N; i++) {
        cin>>arr[i];
    }

    for(int i=1; i<=N; i++) {
        dp[i][i] = 1;
        if(arr[i] == arr[i-1] ) dp[i-1][i] = 1;
    }
    
    for(int i=2; i<N; i++) { // gap
        for(int j=1; j<=N-i; j++) {
            if(arr[j] == arr[i+j] && dp[j+1][i+j-1]) dp[j][i+j] = 1;
        }
    }
    cin>>M;
    while(M--) {
        int x,y; cin>>x>>y;
        cout<<dp[x][y]<<'\n';
    }

}
