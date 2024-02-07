#include<bits/stdc++.h>
using namespace std;

int N,K;
int dist[2][500005];
queue<pair<int,int>> q;
int main() {
    cin>>N>>K;

    if(N == K) {
        cout<<0;
        return 0;
    }

    dist[0][N] = true;
    q.push({N,0});

    while(!q.empty()) {

        int x = q.front().first; 
        int t = q.front().second;
        q.pop();

        int cur = K + t*(t+1)/2;

        if(cur > 500000) {
            cout<<-1;
            return 0;
        }

        if(x == cur || dist[t%2][cur]) {
            cout<<t;
            return 0;
        }

        
        for(auto nxt : {x-1, x+1, 2*x}) {
            
            if(nxt < 0 || nxt > 500000) continue;
            if(dist[(t+1)%2][nxt]) continue;
            dist[(t+1)%2][nxt] = true;
            q.push({nxt, t+1});

        }
    }
    cout<<-1;


}
