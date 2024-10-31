#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> v;
bool visited[55];


int DFS(int cur, int erase) {

    bool isLeaf = true;
    int cnt = 0;

    for(auto nxt : v[cur]) {
        if(erase == nxt) continue;

        if(!visited[nxt]) {
            isLeaf = false;
            visited[nxt] = true;
            cnt += DFS(nxt, erase);
        }
    }

    if(isLeaf) return 1;
    return cnt;

}


int main() {
    int N; cin>>N;
    v.resize(N);

    memset(visited, false, sizeof(visited));

    int start;
    for(int i=0; i<N; i++) {
        int x; cin>>x;
        if(x == -1) {
            start = i;
            continue; 
        }
        v[x].push_back(i);
    }

    int erase; cin>>erase;

    if(start == erase) {
        cout<<0;
        return 0;
    }

    visited[start] = true;
    cout<<DFS(start, erase);
}