#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    int N,K; cin>>N>>K;
    vector<int> v(N);
    for(int i=0; i<N; i++) cin>>v[i];

    sort(v.begin(), v.end());

    int s=0, e=N-2, cnt = 1;
    ll ans = v[N-1];

    while(cnt < K) {
        if(cnt % 2 == 0 ) {
            ans += (v[e] - v[s-1]);
            e--;
        }
        else s++;
        cnt++;
    }
    cout<<ans;

}