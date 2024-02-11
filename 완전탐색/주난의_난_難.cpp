#include<bits/stdc++.h>
using namespace std;

int N, M;
char mat[303][303];
pair<int, int> jnLoc, target;
bool visited[303][303];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int ans = 0;

int main() {
    cin >> N >> M;
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    jnLoc = make_pair(x1, y1); 
    target = make_pair(x2, y2); 
    
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= M; j++) {
            cin >> mat[i][j];
        }
    }

    while(true) {
        queue<pair<int,int>> q;
        q.push(jnLoc);
        memset(visited, false, sizeof(visited));
        visited[jnLoc.first][jnLoc.second] = true;
        ans++;
        while(!q.empty()) {
            int x = q.front().first;
            int y = q.front().second;
            q.pop();

            
            for(int i = 0; i <4; i++) {
                int nx = x + dx[i];
                int ny = y + dy[i];

                if(mat[nx][ny] == '#') {
                cout<<ans;
                return 0;
            }

                if(nx <= 0 || ny <= 0  || nx > N || ny > M || visited[nx][ny]) continue;
                visited[nx][ny] = true;
                if(mat[nx][ny] == '1') {
                    mat[nx][ny] = '0';  
                }
                else {
                    q.push({nx,ny});

                }
                

            }

        }
    }
}