#include <bits/stdc++.h>
using namespace std;

char leftKey[3][5] = {
    {'q', 'w', 'e', 'r', 't'},
    {'a', 's', 'd', 'f', 'g'},
    {'z', 'x', 'c', 'v', '-'}
};

char rightKey[3][6] = {
    {'-', 'y', 'u', 'i', 'o', 'p'},
    {'-', 'h', 'j', 'k', 'l', '-'},
    {'b', 'n', 'm', '-', '-', '-'}
};

map<char, pair<int, int>> left_pos, right_pos;

int main() {
    int ans = 0;
    char l, r;
    cin >> l >> r;
    string tmp;
    cin >> tmp;

    // 위치 저장
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            if (leftKey[i][j] != '-') left_pos[leftKey[i][j]] = {i, j};
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 6; j++) {
            if (rightKey[i][j] != '-') right_pos[rightKey[i][j]] = {i, j};
        }
    }

    for(char c : tmp) {
        if(left_pos.find(c) !=left_pos.end()) {
            int dis = abs(left_pos[l].first - left_pos[c].first) + abs(left_pos[l].second - left_pos[c].second);
            l = c;
            ans += dis + 1;
        }
        else {
            int dis = abs(right_pos[r].first - right_pos[c].first) + abs(right_pos[r].second - right_pos[c].second);
            r = c;
            ans += dis + 1;
        }
    }

    cout << ans;
    return 0;
}
