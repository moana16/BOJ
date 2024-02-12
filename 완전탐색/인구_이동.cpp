#include<bits/stdc++.h>
using namespace std;

int N, L, R;
int mat[50][50];
bool visited[50][50];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

void sol(int i, int j, vector<pair<int,int>>& v, int& sum) {
    queue<pair<int,int>> q;
    q.push({i, j});
    visited[i][j] = true;
    v.push_back({i, j});
    sum += mat[i][j];

    while(!q.empty()) {
        auto [x, y] = q.front(); q.pop();

        for(int d = 0; d < 4; ++d) {
            int nx = x + dx[d], ny = y + dy[d];
            if(nx >= 0 && nx < N && ny >= 0 && ny < N && !visited[nx][ny]) {
                int diff = abs(mat[x][y] - mat[nx][ny]);
                if(diff >= L && diff <= R) {
                    visited[nx][ny] = true;
                    q.push({nx, ny});
                    v.push_back({nx, ny});
                    sum += mat[nx][ny];
                }
            }
        }
    }
}

int main() {
    cin >> N >> L >> R;
    for(int i = 0; i < N; ++i)
        for(int j = 0; j < N; ++j)
            cin >> mat[i][j];

    int days = 0;
    while(true) {
        memset(visited, 0, sizeof(visited));
        bool moved = false;
        for(int i = 0; i < N; ++i) {
            for(int j = 0; j < N; ++j) {
                if(!visited[i][j]) {
                    vector<pair<int,int>> unionCountries;
                    int sum = 0;
                    sol(i, j, unionCountries, sum);

                    if(unionCountries.size() > 1) {
                        moved = true;
                        int avg = sum / unionCountries.size();
                        for(auto& [x, y] : unionCountries) {
                            mat[x][y] = avg;
                        }
                    }
                }
            }
        }
        if(!moved) break;
        days++;
    }

    cout << days << endl;
}
