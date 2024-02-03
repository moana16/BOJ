#include<bits/stdc++.h>
using namespace std;

int R, C, answer = 0;
char mat[22][22];
bool visited[22][22] = {false};
bool alpha[26] = {false}; 
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

void sol(int x, int y, int count) {
    answer = max(answer, count);

    for(int r = 0; r < 4; r++) {
        int nx = x + dx[r];
        int ny = y + dy[r];

        if(nx >= 0 && ny >= 0 && nx < R && ny < C && !visited[nx][ny] && !alpha[mat[nx][ny] - 'A']) {
            visited[nx][ny] = true;
            alpha[mat[nx][ny] - 'A'] = true;
            sol(nx, ny, count + 1);
            visited[nx][ny] = false; 
            alpha[mat[nx][ny] - 'A'] = false;
        }
    }
}

int main() {
    cin >> R >> C;
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            cin >> mat[i][j];
        }
    }
    visited[0][0] = true;
    alpha[mat[0][0]-'A'] = true;
    sol(0,0,1);
    cout<<answer;
}
