#include<bits/stdc++.h>
using namespace std;

int main() {
    int N,M; cin>>N>>M;
    vector<int> v(N);
    for(int i=0; i<N; i++) cin>>v[i];

    int s=0, sum = 0, ans=0;
    for(int e=0; e<N; e++) {
        sum += v[e];
        
        while(sum > M) {
            sum -= v[s++];
        }
        ans = max(ans, sum);
    }

    cout<<ans;
}