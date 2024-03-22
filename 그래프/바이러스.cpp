#include<bits/stdc++.h>
using namespace std;

int n, m, ans = 0;
vector<vector<int>> v(103);
bool visited[103];

int sol(int i) {
    visited[i] = true;
    int cnt = 0;

    for(int j=0; j<v[i].size(); j++) {
        int nxt = v[i][j];
        if(!visited[nxt]) cnt += sol(nxt) + 1;
    }
    return cnt;
}

int main() {
    cin>>n>>m;
    while(m--) {
        int x,y;
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    memset(visited, false, sizeof(visited));

    int k = v[1].size();

    cout<<sol(1);    


}