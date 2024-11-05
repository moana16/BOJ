#include <bits/stdc++.h>
using namespace std;

int mat[5][5];
map<int, pair<int, int>> m;

bool isBingo() {
    int cnt = 0;

    // 행과 열 체크
    for (int i = 0; i < 5; i++) {
        if (count(mat[i], mat[i] + 5, -1) == 5) cnt++; // 행 체크
        if (count_if(mat, mat + 5, [&](int row[5]) { return row[i] == -1; }) == 5) cnt++; // 열 체크
    }

    // 대각선 체크
    bool diag1 = true, diag2 = true;
    for (int i = 0; i < 5; i++) {
        if (mat[i][i] != -1) diag1 = false;
        if (mat[i][4 - i] != -1) diag2 = false;
    }
    if (diag1) cnt++;
    if (diag2) cnt++;

    return cnt >= 3;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> mat[i][j];
            m[mat[i][j]] = {i, j};
        }
    }

    // 사회자가 부르는 숫자 처리
    for (int i = 0; i < 25; i++) {
        int x;
        cin >> x;
        mat[m[x].first][m[x].second] = -1; // 해당 숫자에 -1 표시

        if (isBingo()) {
            cout << i + 1 << '\n';
            return 0;
        }
    }

    return 0;
}
