#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int N; cin>>N;
    priority_queue<ll, vector<ll>, greater<>> pq;
    for(int i=0; i<N; i++) {
        int x; cin>>x;
        pq.push(x);
    }

    ll ans = 0;

    while (!pq.empty())
    {
        if(pq.size() == 1) break;
        ll x = pq.top(); pq.pop();
        ll y = pq.top(); pq.pop();
        ans += x+y;
        pq.push(x+y);
    }

    cout<<ans;
    
}