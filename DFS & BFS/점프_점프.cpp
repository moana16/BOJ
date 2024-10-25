#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    vector<int> v(n+1);
    for(int i=1; i<=n; i++) cin>>v[i];
    int s; cin>>s;

    bool visited[n+2];
    fill(visited+1, visited+n+1, false);

    queue<int> q;
    q.push(s);
    visited[s]= true;

    while(!q.empty()) {
        int x = q.front(); q.pop();

        for(auto nxt : {x-v[x],x+v[x]}) {
            if(nxt < 1 || nxt > n || visited[nxt]) continue;
            visited[nxt] = true;
            q.push(nxt);

        }
    }
    
    int ans = 0;

    for(int i=1; i<=n; i++) {
        if(visited[i]) ans++;
    }

    cout<<ans;
}