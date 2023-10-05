#include<bits/stdc++.h>

using namespace std;

const int MAX_N = 20;
int N;
int board[MAX_N][MAX_N];

int getMaxValue() {
    int maxValue = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            maxValue = max(maxValue, board[i][j]);
        }
    }
    return maxValue;
}

void move(int dir) {
    bool merged[MAX_N][MAX_N] = {false};
    
    if (dir == 0) { // Up
        for (int j = 0; j < N; j++) {
            int idx = 0;
            for (int i = 0; i < N; i++) {
                if (board[i][j] != 0) {
                    if (idx > 0 && board[i][j] == board[idx - 1][j] && !merged[idx - 1][j]) {
                        board[idx - 1][j] *= 2;
                        merged[idx - 1][j] = true;
                    } else {
                        board[idx][j] = board[i][j];
                        merged[idx][j] = false;
                        idx++;
                    }
                }
            }
            while (idx < N) {
                board[idx][j] = 0;
                idx++;
            }
        }
    } else if (dir == 1) { // Right
        // Implement move right
    } else if (dir == 2) { // Down
        // Implement move down
    } else if (dir == 3) { // Left
        // Implement move left
    }
}

void makeMove(int depth) {
    if (depth == 5) {
        return;
    }

    int tempBoard[MAX_N][MAX_N];
    memcpy(tempBoard, board, sizeof(board));

    for (int dir = 0; dir < 4; dir++) {
        move(dir);
        makeMove(depth + 1);
        memcpy(board, tempBoard, sizeof(board));
    }
}

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> board[i][j];
        }
    }

    int maxValue = 0;
    makeMove(0); // Start exploring moves
    maxValue = getMaxValue(); // Get the maximum value obtained

    cout << maxValue << endl;

    return 0;
}
