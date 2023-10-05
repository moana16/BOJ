#include <bits/stdc++.h>
using namespace std;

char mat[5][5];
int cnt_y = 0, cnt_s = 0;
int cnt = 0;
queue<pair<int,int>> q;
int dx = {1,0,-1,0};
int dy = {0,1,0,-1};

void bfs() {
    while(!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for(int i=0; i<4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(mat[nx][ny] == 'S') q.push({nx,ny});
            else if()
        }

    }
}

void sol(int x, int y, int cnt_y, cnt_s) {
    if(cnt_y + cnt+s == 7) {
        if(cnt_s > cnt_y) cnt++;
        return;    
    }
    for(int i= x; i<5; i++) {
        for(int j = y; j<5; j++) {
            q.push({i,j});
            if(q.size() == 7) bfs();
        }
    }

}

int main() {
    for(int i=0; i<5; i++) {
        cin>>mat[i];
    }
    
}