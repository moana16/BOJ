#include <bits/stdc++.h>
using namespace std;

string T;
int N, ans = INT_MAX;
vector<pair<int, string>> books;

void sol(string remain, int total, int cur) {
    if (remain.empty()) {
        ans = min(ans, total);
        return;
    }
    if (cur >= N) return;

    for (int i = cur; i < N; i++) {
        string s = books[i].second;
        string new_remain = "";
        bool used = false;

        // 현재 책으로 남은 문자열을 만들 수 있는지 확인
        for (char c : remain) {
            size_t pos = s.find(c);
            if (pos != string::npos) {
                s.erase(pos, 1);
                used = true;
            } else {
                new_remain += c;
            }
        }

        if (used) {
            sol(new_remain, total + books[i].first, i + 1);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> T >> N;
    books.resize(N);

    for (int i = 0; i < N; i++) {
        cin >> books[i].first >> books[i].second;
    }

    sol(T, 0, 0);

    if (ans == INT_MAX) {
        cout << -1;
    } else {
        cout << ans;
    }

    return 0;
}
