#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

queue<pair<ll, ll>> q;
ll A,B;

int main() {
    cin>>A>>B;
    q.push({A,1});

    while (!q.empty()) 
    {
        ll x = q.front().first; 
        ll cnt = q.front().second;
        q.pop();

        if(x == B) {
            cout<<cnt;
            return 0;
        }
        for(auto nxt : {2*x , x*10 + 1}) {
            if(nxt > B) continue;
            q.push({nxt, cnt+1});
        }
    }

    cout<<-1;
    
    
}