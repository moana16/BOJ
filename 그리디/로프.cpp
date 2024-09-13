#include<bits/stdc++.h>
using namespace std;

int main() {
    int N; cin>>N;
    vector<int> v(N+1);
    for(int i=0; i<N; i++) cin>>v[i];

    sort(v.begin(), v.begin()+N);

    int ans=0;

    for(int i=1; i<=N; i++) {
        ans = max(ans, v[N-i]*i);
    }
    cout<<ans;

}