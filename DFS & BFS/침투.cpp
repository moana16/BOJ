#include <bits/stdc++.h>
using namespace std;

int M, N;
int mat[1002][1002], visited[1002][1002];
int dx[4] = {1, -1, 0, 0};  // 상하좌우 방향 설정
int dy[4] = {0, 0, 1, -1};

void BFS(int i, int j) {
    queue<pair<int, int>> q;
    q.push({i, j});
    visited[i][j] = true;

    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for (int r = 0; r < 4; r++) {
            int nx = x + dx[r];
            int ny = y + dy[r];

            if (nx < 0 || ny < 0 || nx >= M || ny >= N || visited[nx][ny] || mat[nx][ny] == 1) 
                continue;
            
            q.push({nx, ny});
            visited[nx][ny] = true;
        }
    }
}

int main() {
    cin >> M >> N;
    for (int i = 0; i < M; i++) {
        string str;
        cin >> str;
        for (int j = 0; j < N; j++) {
            mat[i][j] = str[j] - '0';
        }
    }

    memset(visited, 0, sizeof(visited));  // 방문 배열을 false로 초기화

    for (int j = 0; j < N; j++) {
        if (mat[0][j] == 0 && !visited[0][j]) {
            BFS(0, j);
        }
    }

    for (int j = 0; j < N; j++) {
        if (visited[M - 1][j]) {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}
