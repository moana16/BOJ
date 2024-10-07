#include<bits/stdc++.h>
using namespace std;

int N; 
int mat[30][30];
bool visited[30][30];
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
vector<int> ans;

void BFS(int i, int j) {
    queue<pair<int,int>> q;
    q.push({i,j});
    visited[i][j] = true;

    int cnt = 1;
    while (!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        
        for(int r=0; r<4; r++) {
            int nx = x + dx[r];
            int ny = y + dy[r];

            if(nx < 0 || ny < 0 || nx >= N || ny >= N || visited[nx][ny] || mat[nx][ny] == 0) continue;
            cnt++;
            q.push({nx,ny});
            visited[nx][ny] = true;
        }
    }
    ans.push_back(cnt);
}

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    cin>>N;
    for(int i=0; i<N; i++) {
        string str; cin>>str;
        for(int j=0; j<N; j++) {
            mat[i][j] = str[j] - '0';
        }
    }


    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            if(mat[i][j] == 1 && !visited[i][j]) {
                BFS(i,j);
            }
        }

    }

    cout<<ans.size()<<'\n';
    sort(ans.begin(), ans.end());
    for(auto c : ans) cout<<c<<'\n';
}