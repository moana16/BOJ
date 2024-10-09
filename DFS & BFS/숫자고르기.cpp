#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> v;
bool visited[103];

bool DFS(int start, int cur) {    

    if(start == cur && visited[start]) return true;
    for(auto nxt : v[cur]) {
        if(!visited[nxt]) {
            visited[nxt] = true;
            if(DFS(start, nxt)) return true;
            visited[nxt] = false;

        } 
    }

    return false;

}

int main() {
    int N; cin>>N;
    v.resize(N+1);

    for(int i=1; i<=N; i++) {
        int x; cin>>x;
        v[i].push_back(x);
    }

    vector<int> ans;
    for(int i=1; i<=N; i++) {
        fill(visited+1, visited+N+1, false);
        if(DFS(i, i)) ans.push_back(i);
    }

    cout<<ans.size()<<'\n';
    for(auto c : ans) cout<<c<<'\n';
}