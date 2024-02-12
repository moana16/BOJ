#include<bits/stdc++.h>
using namespace std;

int R,C;
char mat[1502][1502];
bool visited[1502][1502];

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

queue<pair<int,int>> swanQ, swanNQ, q, nq;
pair<int,int> swanP;

int ans = 0;

bool swanMove() {

    while(!swanQ.empty()) {
        int x = swanQ.front().first;
        int y = swanQ.front().second;
        swanQ.pop();

        for(int r=0; r<4; r++) {
            int nx = x + dx[r];
            int ny = y + dy[r];

            if(nx <= 0 || ny <= 0 || nx > R || ny > C || visited[nx][ny]) continue;
            visited[nx][ny] = true;
            if(mat[nx][ny] == '.') swanQ.push({nx,ny});
            else if(mat[nx][ny] == 'L') return true;
            else if(mat[nx][ny] == 'X') swanNQ.push({nx,ny});
        }

    }
    return false;
}

void melt() {

    while(!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for(int r=0; r<4; r++) {
            int nx = x + dx[r];
            int ny = y + dy[r];

            if(nx <= 0 || ny <= 0 || nx > R || ny > C ) continue;
            if(mat[nx][ny] == 'X') {
                mat[nx][ny] = '.';
                nq.push({nx,ny});
            }     
        }
    }
}


int main() {
    cin>>R>>C;
    for(int i=1; i<=R; i++) {
        for(int j=1; j<=C; j++) {
            cin>>mat[i][j];
            if(mat[i][j] == 'L') {
                swanP.first = i;
                swanP.second = j;
            }
            if(mat[i][j] != 'X') q.push({i,j});
        }
    }

    swanQ.push({swanP.first,swanP.second});
    visited[swanP.first][swanP.second] = true;

    while(true) {

        if(!swanMove()) {
            melt();
            q = nq;
            swanQ = swanNQ;

            while(!nq.empty()) nq.pop();
            while(!swanNQ.empty()) swanNQ.pop();
            ans++;
            
            
        }
        else break;
        
    }
    cout<<ans;
}