#include <bits/stdc++.h>
using namespace std;

int N, M, ans = 0;
int strong[10][10];
bool visited[10][10];

int dx[4][2] = {{-1, 0}, {-1, 0}, {0, 1}, {0, 1}};
int dy[4][2] = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

void sol(int x, int y, int total) {
    if (x == N) {
        ans = max(ans, total);
        return;
    }

    int nx = (y + 1 == M) ? x + 1 : x;
    int ny = (y + 1 == M) ? 0 : y + 1;

    if (!visited[x][y]) {
        for (int r = 0; r < 4; r++) {
            int x1 = x + dx[r][0];
            int y1 = y + dy[r][0];
            int x2 = x + dx[r][1];
            int y2 = y + dy[r][1];

            if (x1 < 0 || x2 < 0 || y1 < 0 || y2 < 0 || x1 >= N || x2 >= N || y1 >= M || y2 >= M) continue;
            if (visited[x1][y1] || visited[x2][y2]) continue;

            visited[x][y] = true;
            visited[x1][y1] = true;
            visited[x2][y2] = true;
            int tmp = strong[x][y] * 2 + strong[x1][y1] + strong[x2][y2];

            sol(nx, ny, total + tmp);

            visited[x][y] = false;
            visited[x1][y1] = false;
            visited[x2][y2] = false;
        }
    }

    sol(nx, ny, total);
}

int main() {
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> strong[i][j];
        }
    }

    memset(visited, false, sizeof(visited));

    sol(0, 0, 0);

    cout << ans;

    return 0;
}
