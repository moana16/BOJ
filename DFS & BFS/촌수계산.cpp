#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> v;
bool visited[102];

bool DFS(int cur, int en, int depth) {
    int cnt = 0;

    if(cur == en) {
        cout<<depth;
        return true;
    }

    visited[cur] = true;

    for(auto nxt : v[cur]) {
        if(!visited[nxt]) {
            if(DFS(nxt, en, depth+1)) { // 경로를 찾으면 true 반환
                return true;
            }
        }
    }
    return false;

}

int main() {
    int n; cin>>n;
    int st, en; cin>>st>>en;
    int m; cin>>m;
    v.resize(n+1);

    for(int i=0; i<m; i++) {
        int a,b; cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
        
    }

    memset(visited, false, sizeof(visited));
    if(!DFS(st, en, 0)) cout<<-1;
}