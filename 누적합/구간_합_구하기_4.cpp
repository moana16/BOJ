#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int N,M; cin>>N>>M;
    int pSum[100004];
    for(int i=1; i<=N; i++) {
        int x; cin>>x;
        pSum[i] = pSum[i-1] + x;
    }
    while(M--) {
        int i,j; cin>>i>>j;
        cout<<pSum[j]-pSum[i-1]<<'\n';
    }
}