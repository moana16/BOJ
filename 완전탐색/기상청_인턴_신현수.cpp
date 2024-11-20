#include<bits/stdc++.h>
using namespace std;

int main() {
    int N,K; cin>>N>>K;
    vector<int> pSum(N);

    for(int i=0; i<N; i++) {
        int x; cin>>x;
        if(i == 0) {
            pSum[i] = x;
            continue;
        }
        pSum[i] = x + pSum[i-1];
    }
    int ans = pSum[K-1];

    for(int i=K; i<N; i++) {
        ans = max(ans, pSum[i]-pSum[i-K]);
    }
    
    cout<<ans;
}