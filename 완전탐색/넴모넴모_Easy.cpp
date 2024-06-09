#include <iostream>
#include <vector>
using namespace std;

int N, M;
int count = 0;
vector<vector<bool>> board;

bool is_valid(int x, int y) {
    if (x > 0 && y > 0) {
        if (board[x-1][y-1] && board[x-1][y] && board[x][y-1] && board[x][y])
            return false;
    }
    return true;
}

void backtrack(int x, int y) {
    if (x == N) {
        count++;
        return;
    }

    int next_x = (y + 1 == M) ? x + 1 : x;
    int next_y = (y + 1 == M) ? 0 : y + 1;

    backtrack(next_x, next_y);

    board[x][y] = true;
    if (is_valid(x, y)) {
        backtrack(next_x, next_y);
    }
    board[x][y] = false;
}

int main() {
    cin >> N >> M;
    board.assign(N, vector<bool>(M, false));
    backtrack(0, 0);
    cout << count;
    return 0;
}
