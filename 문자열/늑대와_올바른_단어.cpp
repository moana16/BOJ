#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    int i = 0, n = s.length();

    while (i < n) {
        if (s[i] != 'w') {
            cout << 0;
            return 0;
        }
        int cnt = 0;
        while (i < n && s[i] == 'w') {
            cnt++;
            i++;
        }

        for (char c : {'o', 'l', 'f'}) {
            int tmp = 0;
            while (i < n && s[i] == c) {
                tmp++;
                i++;
            }
            if (tmp != cnt) {
                cout << 0;
                return 0;
            }
        }
    }

    cout << 1;
    return 0;
}
