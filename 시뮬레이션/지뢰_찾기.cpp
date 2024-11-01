#include<bits/stdc++.h>
using namespace std;

int dr[8][2] = {{0,1},{1,0},{0,-1},{-1,0},{1,1},{-1,-1},{1,-1},{-1,1}};

int main() {
    int n; cin>>n;
    char bomb[12][12], mat[12][12], ans[12][12];
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cin>>bomb[i][j];
        }
    } 

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cin>>mat[i][j];
        }
    }

    bool gameOver = false;

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(mat[i][j] == 'x') {
                if(bomb[i][j] == '*') {
                    ans[i][j] = '*';
                    gameOver = true;

                }
                else {
                    int cnt = 0;
                    for(int r=0; r<8; r++) {
                        int nx = i + dr[r][0];
                        int ny = j + dr[r][1];

                        if(nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
                        if(bomb[nx][ny] == '*') cnt++;
                    }
                    ans[i][j] = cnt + '0';
                }
            }
            else ans[i][j] = '.';
        }
    }

    if(gameOver) {
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                if(bomb[i][j] == '*') ans[i][j] = '*';
            }
        }
    }

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout<<ans[i][j];
        }
        cout<<'\n';
    }


}