#include<bits/stdc++.h>
using namespace std;

int N,K;
int dist[100001];
int path[100001];
queue<int> q;

int main() {
    cin>>N>>K;
    fill(dist, dist+100001, -1);
    q.push(N);
    dist[N] = 0;
    path[N] = -1;

    while(dist[K] == -1) {
        int x = q.front(); q.pop();
        for(auto nxt : {x-1, x+1, 2*x}) {
            if(nxt < 0 || nxt > 100000) continue;
            if(dist[nxt] != -1) continue;
            dist[nxt]= dist[x] + 1;
            path[nxt] = x;
            q.push(nxt);
        }
    }
    stack<int> s;

    cout << dist[K] << '\n';

    for(int i = K; i != N; i = path[i]) {
        s.push(i);
    }
    s.push(N); 

    while(!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }

    
}