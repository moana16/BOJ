#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int N;
ll ans = 0;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    cin>>N;
    vector<ll> pSum(N+1), honeys(N+1);
    pSum[0] = 0;
    for(int i=1; i<=N; i++) {
        cin>>honeys[i];
        pSum[i] = honeys[i] + pSum[i-1];
    }

    for(int i=2; i<N; i++) {
        // 1. 벌(1) 꿀통(i) 벌(N)
        ans = max(ans, pSum[i] - pSum[1] + pSum[N-1] - pSum[i-1]);
        // 2. 벌(1) 벌(i) 꿀통(N)
        ans = max(ans, pSum[N] - pSum[1] + pSum[N] - pSum[i] - honeys[i]);
        // 3. 꿀통(1) 벌(i) 벌(N)
        ans = max(ans, pSum[N-1] - pSum[0] + pSum[i-1] - pSum[0] - honeys[i]);
    }

    cout<<ans;
}

