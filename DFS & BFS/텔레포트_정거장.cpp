#include<bits/stdc++.h>
using namespace std;

int visited[300003];

int main() {
    int N,M; cin>>N>>M;
    int S,E; cin>>S>>E;
    vector<vector<int>> path(N+1);

    for(int i=0; i<M; i++) {
        int a,b; cin>>a>>b;
        path[a].push_back(b);
        path[b].push_back(a);
    }

    if(S == E) {
        cout<<0;
        return 0;
    }

    queue<int> q;
    memset(visited, -1, sizeof(visited));

    q.push(S);
    visited[S] = 0;

    while (!q.empty())
    {
        int x = q.front(); q.pop();
        if(x == E) break;

        if(!path[x].empty()) {
            for(auto c: path[x]) {
                if(visited[c] != -1) continue;
                q.push(c);
                visited[c] = visited[x] + 1;
            }
        }


        for(auto nxt : {x+1, x-1}) {
            if(nxt > N || nxt < 1 || visited[nxt] != -1) continue;
            q.push(nxt);
            visited[nxt] = visited[x] + 1;
        }
    }
    cout<<visited[E];
}