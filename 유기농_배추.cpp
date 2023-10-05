#include <bits/stdc++.h>
using namespace std;
int mat[52][52];
bool visited[52][52];
int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};

int main()
{
    int T; cin>>T;
    while (T--)
    {
        queue<pair<int, int>> q;
        int cnt = 0;
        int M, N, K; // M은 가로, N은 세로, 배추가 심어진 위치의 개수 K
        cin >> M >> N >> K;
        for (int i = 0; i < N; i++)
        { // 각 테스트 케이스 마다 배열 초기화시켜주기
            fill(mat[i], mat[i] + M, 0);
            fill(visited[i], visited[i] + M, false);
        }
        for (int i = 0; i < K; i++)
        {
            int x, y;
            cin >> y >> x;
            mat[x][y] = 1;
            
        }

        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M ; j++)
            {
                if (mat[i][j] == 1 && !visited[i][j])
                {
                    q.push({i, j});
                    while (!q.empty())
                    {
                        int x = q.front().first;
                        int y = q.front().second;
                        visited[x][y] = true;
                        q.pop();

                        for (int i = 0; i < 4; i++)
                        {
                            int nx = x + dx[i];
                            int ny = y + dy[i];

                            if (nx < 0 || ny < 0 || nx >= N || ny >= M)
                                continue;
                            if (!visited[nx][ny] && mat[nx][ny] == 1)
                            {
                                q.push({nx, ny});
                                visited[nx][ny] = true;
                            }
                        }
                    }
                    cnt++;
                }
            }
        }

        cout<<cnt<<'\n';
    }
}