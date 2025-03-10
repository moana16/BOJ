#include<bits/stdc++.h>
using namespace std;

int main() {
    int N,M; cin>>N>>M;
    vector<int> high(N), low(M);
    for(int i=0; i<N; i++) cin>>high[i];
    for(int i=0; i<M; i++) cin>>low[i];

    sort(high.begin(), high.end());
    sort(low.begin(), low.end());

    int l=0, r=0;
    int ans = N;

    while(l < N && r < M) {
        if(high[l] <= low[r]) {
            l++;
        }else {
            ans++;
            l++;
            r++;
        }
    }

    cout<<ans;


}