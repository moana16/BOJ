#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    queue<int> q;
    int mx = 0, idx = 1e9;

    while (n--) {
        int x;
        cin >> x;
        if (x == 1) {
            int cur;
            cin >> cur;
            q.push(cur);

            if ((int)q.size() > mx) {
                mx = q.size();
                idx = q.back();
            } else if ((int)q.size() == mx) {
                idx = min(idx, q.back());
            }
        } else {
            if (!q.empty()) q.pop();
        }
    }

    cout << mx << " " << idx;
}
