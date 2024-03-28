#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int N,M;
ll pSum[1004];

int main() {
    cin>>N>>M;
    long long total = 0, ans = 0;
    int x;
    pSum[0] = 1;
    for(int i=1; i<=N; i++) {
        cin>>x;
        total += x;
        ans += pSum[total % M];
        pSum[total % M]++;
    }

    cout<<ans;

}