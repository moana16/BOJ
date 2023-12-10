#include<bits/stdc++.h>
using namespace std;

int dist[200002];
deque<int> q;
int MX = 200000;

//0-1 BFS

int main() {
    int N,K; cin>>N>>K;
    fill(dist, dist+MX, -1);
    q.push_back(N);
    dist[N] = 0;

    while(!q.empty()) {
        int x = q.front(); q.pop_front();

        if(2*x < MX && dist[2*x] == -1) {
            dist[2*x] = dist[x];
            q.push_front(2*x); 
        }

        for(auto nxt : { x-1, x+1}) {
            if(dist[nxt] != -1) continue;
            if(nxt < 0 || nxt > MX) continue;
            dist[nxt] = dist[x]+1; 
            q.push_back(nxt);
        }

    }
    cout<<dist[K];
    
}