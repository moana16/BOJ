#include<bits/stdc++.h>
using namespace std;

int dist[102][102];
int N;
int MIN = 102;
int MAX = 0;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int cnt_MAX = 1;
bool visited[102][102];

void BFS(int x, int y, int height) {
    queue<pair<int, int>> q;
    q.push({x, y});
    visited[x][y] = true;

    while (!q.empty()) {
        int cx = q.front().first;
        int cy = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++) {
            int nx = cx + dx[i];
            int ny = cy + dy[i];

            if (nx < 0 || ny < 0 || nx >= N || ny >= N) continue;
            if (dist[nx][ny] <= height || visited[nx][ny]) continue;

            q.push({nx, ny});
            visited[nx][ny] = true;
        }
    }
}

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    cin >> N;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> dist[i][j];
            MIN = min(MIN, dist[i][j]);
            MAX = max(MAX, dist[i][j]);
        }
    }

    for (int height = MIN; height <= MAX; height++) {
        memset(visited, false, sizeof(visited));
        int cnt = 0;

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (dist[i][j] > height && !visited[i][j]) {
                    BFS(i, j, height);
                    cnt++;
                }
            }
        }

        cnt_MAX = max(cnt_MAX, cnt);
    }

    cout << cnt_MAX;
}
