#include<bits/stdc++.h>
using namespace std;

int N, K, ans = 0;
bool learn[26];
vector<string> strs;

void sol(int cnt, int idx) {
    if (cnt == K) {
        int total = 0;
        for (auto s : strs) {
            bool flag = true;
            for (int i = 0; i < s.length(); i++) {
                if (!learn[s[i] - 'a']) {
                    flag = false;
                    break;
                }
            }
            if (flag) total++;
        }
        ans = max(ans, total);
        return;
    }

    for (int i = idx; i < 26; i++) {
        if (!learn[i]) {
            learn[i] = true;
            sol(cnt + 1, i + 1);
            learn[i] = false;
        }
    }
}

int main() {
    cin >> N >> K;
    for (int i = 0; i < N; i++) {
        string s; cin >> s;
        strs.push_back(s);
    }

    if (K < 5) {
        cout << 0;
        return 0;
    }

    memset(learn, false, sizeof(learn));
    // 기본적으로 알아야 할 알파벳 설정
    learn['a' - 'a'] = true;
    learn['c' - 'a'] = true;
    learn['i' - 'a'] = true;
    learn['n' - 'a'] = true;
    learn['t' - 'a'] = true;

    sol(5, 0);
    cout << ans;
}
