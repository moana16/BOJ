#include<bits/stdc++.h>
using namespace std;

int N, direction = 0, ans = 0;
int mat[505][505];
int dx[4] = {0,1,0,-1};
int dy[4] = {-1,0,1,0};
float sandRatio[9] = {1,1,2,2,7,7,10,10,5};
int spreadX[4][9] = {{-1,1,-2,2,-1,1,-1,1,0},{-1,-1,0,0,0,0,1,1,2},{-1,1,-2,2,-1,1,-1,1,0},{1,1,0,0,0,0,-1,-1,-2}};
int spreadY[4][9] = {{1,1,0,0,0,0,-1,-1,-2},{-1,1,-2,2,-1,1,-1,1,0},{-1,-1,0,0,0,0,1,1,2},{1,-1,2,-2,1,-1,1,-1,0}};

void spread(int x, int y, int d) {
    int totalSand = mat[x][y];
    mat[x][y] = 0;
    int totalMovedSand = 0;
    
    if(totalSand == 0) return;

    for(int i=0; i<9; i++) {
        int nx = x + spreadX[d][i];
        int ny = y + spreadY[d][i];
        int moveSand = (totalSand * sandRatio[i]) / 100.0;
        totalMovedSand += moveSand;


        if(nx <= 0 || ny <= 0 || nx > N || ny > N) {
            ans += moveSand;
        }else mat[nx][ny] += moveSand;
        
    }

    int remainSand = totalSand - totalMovedSand;
    
    int ax = x + dx[d];
    int ay = y + dy[d];
    if(ax <= 0 || ay <= 0 || ax > N || ay > N) ans += remainSand;
    else mat[ax][ay] += remainSand;
}

int main() {
    cin>>N;
    for(int i=1; i<=N; i++) {
        for(int j=1; j<=N; j++) {
            cin>>mat[i][j];
        }
    }
    int x = N/2 + 1; int y = N/2 + 1;
    for(int i=1; i<=N; i++) {
        int cnt = 2;
        while(cnt--) {
            for(int j=0; j<i; j++) {
                x = x + dx[direction%4];
                y = y + dy[direction%4];
                spread(x,y,direction%4);
            }
            direction++;

        }
    }
    cout<<ans;

}