#include<bits/stdc++.h>
using namespace std;

int N, H, D, ans = INT_MAX;
char mat[505][505];
bool visited[505][505][11][11]; // 체력과 우산 상태까지 고려한 방문 배열
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

struct State {
    int x, y, health, umbrella, cnt;
};

queue<State> q;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    cin >> N >> H >> D;

    pair<int, int> st;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> mat[i][j];
            if (mat[i][j] == 'S') {
                st.first = i;
                st.second = j;
            }
        }
    }

    memset(visited, false, sizeof(visited));
    q.push({st.first, st.second, H, 0, 0});
    visited[st.first][st.second][H][0] = true;

    while (!q.empty()) {
        State cur = q.front();
        q.pop();

        if (cur.health <= 0) continue;

        for (int r = 0; r < 4; r++) {
            int nx = cur.x + dx[r];
            int ny = cur.y + dy[r];
            int nu = cur.umbrella;
            int nh = cur.health;
            int nc = cur.cnt + 1;

            if (nx < 0 || ny < 0 || nx >= N || ny >= N || mat[nx][ny] == 'S') continue;

            if (mat[nx][ny] == 'E') {
                ans = min(ans, nc);
                continue;
            }

            if (mat[nx][ny] == 'U') nu = D-1;

            if (mat[nx][ny] == '.') {
                if (nu > 0) nu--;
                else if (nh > 0) nh--;
            }

            if (!visited[nx][ny][nh][nu]) {
                visited[nx][ny][nh][nu] = true;
                q.push({nx, ny, nh, nu, nc});
            }
        }
    }

    if (ans == INT_MAX) cout << -1;
    else cout << ans;

    return 0;
}
