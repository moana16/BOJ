#include<bits/stdc++.h>
using namespace std;

int N,M, ans = 0;
int mat[1002][1002], area_size[10000002], area_id[1002][1002];
bool visited[1002][1002];
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
int id = 1;

void BFS(int i, int j) {
    queue<tuple<int,int>> q;
    q.push({i,j});
    visited[i][j] = true;
    area_id[i][j] = id;
    int size = 0;

    while(!q.empty()) {
        int x = get<0>(q.front());
        int y = get<1>(q.front());
        q.pop();
        size++;
        

        for(int r=0; r<4; r++) {
            int nx = x + dx[r];
            int ny = y + dy[r];

            if(nx < 0 || ny < 0 || nx >= N || ny >= M || visited[nx][ny] || mat[nx][ny] == 0) continue;
            q.push({nx,ny});
            visited[nx][ny] = true;
            area_id[nx][ny] = id;
        }
    }
    area_size[id] = size;
    id++;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(0);

    cin>>N>>M;
    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            cin>>mat[i][j];
        }
    }

    memset(visited, false, sizeof(visited));

    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            if(mat[i][j] == 1 && !visited[i][j]) {
                BFS(i,j);
            }
        }
    }

    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            if(mat[i][j] == 0) {
                set<int> s;
                int new_size = 1;

                for(int r=0; r<4; r++) {
                    int nx = i + dx[r];
                    int ny = j + dy[r];

                    if(nx < 0 || ny < 0 || nx >= N || ny >= M) continue;
                    if(mat[nx][ny] == 1) s.insert(area_id[nx][ny]);
                }

                for(int id : s) new_size += area_size[id];

                ans = max(ans, new_size);
            }
        }
    }



    cout<<ans;

}