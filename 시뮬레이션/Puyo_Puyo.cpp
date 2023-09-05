#include <bits/stdc++.h>
using namespace std;

int mat[15][10];
int ans = 0;

int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};

bool sol() {
    queue<pair<int, int>> q;
    bool visited[15][10] = {false};
    bool isPuyo = false;

    for (int i = 11; i >= 0; i--) {
        for (int j = 0; j < 6; j++) {
            if (mat[i][j] != '.' && !visited[i][j]) {
                vector<pair<int, int>> v;
                q.push({i, j});
                while (!q.empty()) {
                    int x = q.front().first;
                    int y = q.front().second;
                    q.pop();
                    visited[x][y] = true;
                    v.push_back({x, y});
                    for (int r = 0; r < 4; r++) {
                        int nx = x + dx[r];
                        int ny = y + dy[r];

                        if (nx < 0 || ny < 0 || nx >= 12 || ny >= 6 || visited[nx][ny] || mat[nx][ny] != mat[x][y])
                            continue;
                        q.push({nx, ny});
                        visited[nx][ny] = true;
                    }
                }
                if (v.size() >= 4) {
                    for (int k = 0; k < v.size(); k++) {
                        int x = v[k].first;
                        int y = v[k].second;
                        mat[x][y] = '.';
                        isPuyo = true;
                    }
                }
            }
        }
    }
    return isPuyo;
}

void gravity() {
    for (int j = 0; j < 6; j++) {
        for (int i = 11, k = 11; i >= 0; i--) {
            if (mat[i][j] != '.') {
                swap(mat[i][j], mat[k][j]);
                k--;
            }
        }
    }
}

int main() {
    for (int i = 0; i < 12; i++) {
        string row;
        cin >> row;
        for (int j = 0; j < 6; j++) {
            mat[i][j] = row[j];
        }
    }

    while (1) {
        bool isPuyo = sol();
        if (!isPuyo)
            break;

        gravity();
        ans++;
    }
    cout << ans;
}
