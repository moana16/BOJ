#include<bits/stdc++.h>
using namespace std;
int N,M,x,y,K;
int mat[22][22];
int tmp[1003];
int dice[7];
//   2
// 4 1 3
//   5
//   6
int dir[5][4] = {
    {},
    {1,3,6,4}, //동
    {1,4,6,3}, //서
    {5,1,2,6}, //북
    {1,5,6,2}  //남
    };


int main() {
    cin>>N>>M>>x>>y>>K;
    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) cin>>mat[i][j];
    }
    while(K--) {
        int t; cin>>t;
        int nx = x; int ny = y;
        if(t == 1) ny++;
        else if(t == 2) ny--;
        else if(t == 3) nx--;
        else nx++;

        if(nx < 0 || ny < 0 || nx  >= N || ny >= M) continue;
        x = nx; y = ny;
        int tmp[7];
        for(int i=1; i<=6; i++) tmp[i] = dice[i];
        for(int i=0; i<4; i++) {
            tmp[dir[t][i]] = dice[dir[t][(i+1)%4]];
        }
        for(int i=1; i<=6; i++) dice[i] = tmp[i];


        if(mat[nx][ny] == 0) mat[nx][ny] = dice[6];
        else {
            dice[6] = mat[nx][ny];
            mat[nx][ny] = 0;
        } 

        cout<<dice[1]<<'\n';


    }

}