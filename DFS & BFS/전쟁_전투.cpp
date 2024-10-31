#include<bits/stdc++.h>
using namespace std;

char mat[102][102];
bool visited[102][102];
int dr[4][2] = {{0,1},{1,0},{0,-1},{-1,0}};
int N,M;

int BFS(int i, int j, char s) {
    queue<pair<int,int>> q;
    q.push({i,j});
    visited[i][j] = true;
    int total = 0;

    while (!q.empty())
    {   
        int x = q.front().first;
        int y = q.front().second;
        
        total++;
        q.pop();

        for(int r=0; r<4; r++) {
            int nx = x + dr[r][0];
            int ny = y + dr[r][1];

            if(nx < 0 || nx >= M || ny < 0 || ny >= N | visited[nx][ny] || mat[nx][ny] != s) continue;
            q.push({nx,ny});
            visited[nx][ny] = true;
            
        }
    }
    return pow(total, 2);

}

int main() {
    cin>>N>>M;
    long long B = 0, W = 0;

    memset(visited, false, sizeof(visited));


    for(int i=0; i<M; i++) {
        for(int j=0; j<N; j++) {
            cin>>mat[i][j];
        }
    }

    for(int i=0; i<M; i++) {
        for(int j=0; j<N; j++) {
            if(mat[i][j] == 'W' && !visited[i][j]) {
                W += BFS(i,j, 'W');
            }
        }
    }

    for(int i=0; i<M; i++) {
        for(int j=0; j<N; j++) {
            if(mat[i][j] == 'B' && !visited[i][j]) {
                B += BFS(i,j,'B');
            }
        }
    }

    cout<<W<<" "<<B;


}