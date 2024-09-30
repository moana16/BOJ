#include <bits/stdc++.h>
using namespace std;

// 스위치 눌렀을 때 해당 인덱스와 좌우 전구를 반전하는 함수
void toggle(string &tmp, int idx) {
    for (int i = idx - 1; i <= idx + 1; i++) {
        if (i >= 0 && i < tmp.size()) {
            tmp[i] = (tmp[i] == '0') ? '1' : '0';
        }
    }
}

int main() {
    int n;
    cin >> n;
    string str, goal;
    cin >> str >> goal;

    int ans = INT_MAX;

    // 첫번째 전구를 누르지 않은 경우
    string tmp = str;
    int cnt = 0;
    for (int i = 1; i < n; i++) {
        if (tmp[i - 1] != goal[i - 1]) {
            toggle(tmp, i);
            cnt++;
        }
    }

    if (tmp == goal) ans = min(ans, cnt);

    // 첫번째 전구를 누른 경우
    tmp = str;
    cnt = 1; // 첫 번째 전구를 눌렀으므로 카운트를 1로 시작
    toggle(tmp, 0);

    for (int i = 1; i < n; i++) {
        if (tmp[i - 1] != goal[i - 1]) {
            toggle(tmp, i);
            cnt++;
        }
    }

    if (tmp == goal) ans = min(ans, cnt);

    // 결과 출력
    if (ans == INT_MAX) cout << -1 << endl;
    else cout << ans << endl;

    return 0;
}
