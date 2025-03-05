#include<bits/stdc++.h>
using namespace std;

int main() {
    int N,K; cin>>N>>K;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin>>v[i];

    map<int,int> mp;

    int s=0, e=0, ans = 0;

    while(e < N) {
        mp[v[e]]++;
        while(mp[v[e]] > K) {
            mp[v[s++]]--;
        }
        ans = max(ans, e-s+1);
        e++;
    }

    cout<<ans;
}