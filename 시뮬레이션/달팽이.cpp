#include <bits/stdc++.h>
using namespace std;

int mat[1002][1002];
int dr[4][2] = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}}; // 위, 오른쪽, 아래, 왼쪽 순으로 이동

int main() {
    int N, M;
    cin >> N >> M;

    int i = N / 2, j = N / 2;
    int cur = 1;
    mat[i][j] = cur;  // 중앙에서 시작
    int dir = 0;
    int time = 1;
    
    pair<int, int> ans;

    if (cur == M) ans = {i, j};

    while (cur < N * N) {
        int cnt = 2;

        while (cnt--) {
            for (int k = 0; k < time; k++) {
                i += dr[dir % 4][0];
                j += dr[dir % 4][1];

                // 현재 위치에 값 할당
                mat[i][j] = ++cur;
                if (cur == M) ans = {i, j};
                if (cur == N * N) break;
            }
            dir++;
            if (cur == N * N) break;
        }
        time++;
    }

    // 결과 출력
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << mat[i][j] << " ";
        }
        cout << '\n';
    }
    cout << ans.first + 1 << " " << ans.second + 1 << '\n';

    return 0;
}
