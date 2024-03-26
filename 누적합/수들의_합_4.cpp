#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int N,K;
int arr[200002];
ll pSum[2000002];
ll ans = 0;
unordered_map<ll, int> counts;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    cin>>N>>K;
    counts[0] = 1;
    for(int i=1; i<=N; i++) {
        cin>>arr[i];
        pSum[i] = pSum[i-1] + arr[i];
        ans += counts[pSum[i]-K];
        counts[pSum[i]]++;
    }

    cout<<ans;

}