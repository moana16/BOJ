#include<bits/stdc++.h>
using namespace std;

int N; 
char mat[103][103];
bool visited[103][103];
int cnt_1=0, cnt_2=0;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};


void BFS(int i, int j) {
    queue<pair<int,int>> q;
    visited[i][j] = true;
    q.push({i,j});


    while(!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for(int r=0; r<4; r++) {
            int nx = x + dx[r];
            int ny = y + dy[r];
            
            if(nx < 0 || ny < 0 || nx >= N || ny >= N ) continue;
            if(mat[i][j] != mat[nx][ny] || visited[nx][ny] == true) continue;
            q.push({nx,ny});
            visited[nx][ny] = true;
        }
    }

}


int main() {
    ios::sync_with_stdio(false); cin.tie(0);

    cin>>N;
    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            cin>>mat[i][j];            
        }
    }

    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            if(!visited[i][j]) {
                BFS(i,j);
                cnt_1++;
            }
        }
    }

    for(int i=0; i<N; i++) {
        fill(visited[i], visited[i]+N,false);
        for(int j=0; j<N; j++) {
            if(mat[i][j] == 'G') {
                mat[i][j] = 'R';
            }
        }
    }

    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            if(!visited[i][j]) {
                BFS(i,j);
                cnt_2++;
            }
        }
    }

    cout<<cnt_1<<" "<<cnt_2;

    
}