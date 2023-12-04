#include<bits/stdc++.h>
using namespace std;
int N,K;
queue<int> q;
int dist[100001];


int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    cin>>N>>K;
    fill(dist, dist+100001,-1);
    q.push(N);
    dist[N] = 0;
    while(dist[K] == -1) {
        int x = q.front();
        q.pop();

        for(auto nx : {x+1, x-1, 2*x}) {
            if(nx < 0 || nx > 100000) continue;
            if(dist[nx] != -1) continue;
            dist[nx] = dist[x]+1;
            q.push(nx);
        }
    }
    cout<<dist[K];

}

