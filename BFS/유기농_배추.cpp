#include <bits/stdc++.h>
using namespace std;
int dx[] = {1,0,-1,0};
int dy[] = {0,1,0,-1};

int main() {
    int n; cin>>n;
    while(n--) {
        int R, C, K; cin>>R>>C>>K;
        int mat[52][52];
        bool visited[52][52];
        int num=0;
        for(int i=0; i<52; i++) {
            fill(mat[i],mat[i]+C,-1);
            fill(visited[i], visited[i]+C, false); //초기화 꼭 좀 부탁드립니다~
        }
        
        while(K--) {
            int i,j;
            cin>>i>>j;
            mat[i][j]=1;
        }
        for(int i=0; i<R; i++) {
            for(int j=0; j<C; j++) {
                if(mat[i][j] == -1 || visited[i][j] ) continue;
                //cout<<i<<" "<<j<<'\n';
                num++;
                queue<pair<int,int> > Q;
                visited[i][j] = true; // (i,j)로 BFS를 시작하기 위한 준비
                Q.push({i,j});

                while(!Q.empty()){
                    pair<int,int> cur = Q.front(); Q.pop();
                    for(int dir = 0; dir < 4; dir++){ // 상하좌우 칸을 살펴볼 것이다.
                        int nx = cur.first+ dx[dir];
                        int ny = cur.second + dy[dir]; // nx, ny에 dir에서 정한 방향의 인접한 칸의 좌표가 들어감
                        if(nx > 0 || nx < R || ny > 0 || ny < C) {
                            if(!visited[nx][ny] && mat[nx][ny] == 1) {
                            visited[nx][ny] = true; // (nx, ny)를 방문했다고 명시
                            Q.push({nx,ny});
                            } // 이미 방문한 칸이거나 파란 칸이 아닐 경우
                
                        }

                    } // 범위 밖일 경우 넘어감
                
                }
            }
        }
        cout<<num<<'\n';
    }
}