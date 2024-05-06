#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int T; cin>>T;
    while(T--) {
        int K; cin>>K;
        ll ans = 0;
        priority_queue<ll, vector<ll>, greater<>> pq;
        for(int i=0; i<K; i++) {
            int n; cin>>n;
            pq.push(n);
        }

        while(!pq.empty()) {
            if(pq.size() == 1) break;
            ll x = pq.top(); pq.pop();
            ll y = pq.top(); pq.pop();
            ans += x + y;
            pq.push(x+y);
        }
        pq.pop();
        cout<<ans<<'\n';


        
    }
}
