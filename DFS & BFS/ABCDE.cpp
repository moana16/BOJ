#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> v;
int visited[2002];

bool dfs(int cur, int depth) {
    if(depth == 4) return true; 

    for(auto nxt : v[cur]) {
        if(!visited[nxt]) {
            visited[nxt] = true;
            if(dfs(nxt, depth+1)) return true;
            visited[nxt] = false;
        }
    }
    return false;
}

int main(){
    int N,M; cin>>N>>M;
    v.resize(N);
    
    for(int i=0; i<M; i++) {
        int a,b; cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }


    for(int i=0; i<N; i++) {
        fill(visited, visited+N, false);
        visited[i] = true;
        if(dfs(i,0)) {
            cout<<1;
            return 0;
        }
        
    }
    cout<<0;
}