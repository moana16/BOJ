#include <bits/stdc++.h>
using namespace std;
int N,M;
int mat[1002][1002]; //0은 이동가능 1은 불가능
bool visited[2][1002][1002]; //벽을 부셨는지 여부도 같이 넣어줌
int dx[] = {1,0,-1,0};
int dy[] = {0,1,0,-1};
int dist[1002][1002];
typedef struct 
{
    int x;
    int y;
    int breaked; //0이면 안부숨, 1이면 부숨
}st;

queue<st> q; //좌표값과 벽부섰는지 저장해줄 큐

void BFS() {
    q.push({0,0,0});
    visited[0][0][0] = true;
    dist[0][0] = 1;

    while(!q.empty()) {
        
        int x = q.front().x;
        int y = q.front().y;
        int isBreak = q.front().breaked;
        q.pop();
        //cout<<isBreak<<'\n';

        if(x == N-1 && y == M-1) {
            cout<<dist[N-1][M-1];
            return;
        }

        for(int i=0; i<4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
            if(mat[nx][ny] == 1 && isBreak == 0 && !visited[isBreak][nx][ny] ) { //벽이고 부수지 않았을 때
                dist[nx][ny] = dist[x][y] + 1;
                visited[isBreak][nx][ny]= true;
                //isBreak = 1;
                //cout<<x<<" "<<y<<'\n';
                q.push({nx,ny,1});

            }
            if(mat[nx][ny] == 0 && !visited[isBreak][nx][ny]) { //벽이 아닐 때
                dist[nx][ny] = dist[x][y] + 1;
                visited[isBreak][nx][ny] = true;
                q.push({nx,ny,isBreak});
            }
            
            
        }

    }
    cout<<-1;


}

int main() {
    cin>>N>>M;
    for(int i=0; i<N; i++) {
        string row;
        cin>>row;

        for(int j=0;j<M;j++) {
            mat[i][j] = row[j]-'0';
        }
    }
        
    for(int i=0; i<N; i++) fill(dist[i], dist[i]+M, -1);
    BFS(); 
    
}