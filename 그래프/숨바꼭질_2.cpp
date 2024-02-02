#include<bits/stdc++.h>
using namespace std;
int N,K;
int mat[100003];
queue<int> q;
int dist[100003];
int cnt[100003];

int main() {
    cin>>N>>K;
    fill(dist, dist+100003, -1);
    q.push(N);
    dist[N] = 0;
    cnt[N] = 1;
    while(!q.empty()) {
        int x = q.front();
        q.pop();

        for(auto nxt : {x - 1, x + 1, 2 * x}) {
            if(nxt < 0 || nxt > 100000) continue;
            if(dist[nxt] != -1) {
                if(dist[x] + 1 == dist[nxt]) cnt[nxt] += cnt[x];
            }
            else {
                dist[nxt] = dist[x] + 1;
                cnt[nxt] = cnt[x];
                q.push(nxt);
            }

        }
    }
    cout<<dist[K]<<'\n'<<cnt[K];
}