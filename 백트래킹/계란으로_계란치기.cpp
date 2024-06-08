#include <bits/stdc++.h>
using namespace std;

int N, ans = 0;
vector<pair<int, int>> eggs;

void sol(int cur) {
    if (cur == N) {
        int cnt = 0;
        for (int i = 0; i < N; i++) {
            if (eggs[i].first <= 0) cnt++;
        }
        ans = max(ans, cnt);
        return;
    }

    if (eggs[cur].first <= 0) {
        sol(cur + 1);
        return;
    }

    bool hit = false;
    for (int i = 0; i < N; i++) {
        if (i == cur || eggs[i].first <= 0) continue;

        hit = true;
        eggs[cur].first -= eggs[i].second;
        eggs[i].first -= eggs[cur].second;

        sol(cur + 1);

        eggs[cur].first += eggs[i].second;
        eggs[i].first += eggs[cur].second;
    }

    if (!hit) {
        sol(cur + 1);
    }
}

int main() {
    cin >> N;
    eggs.resize(N);

    for (int i = 0; i < N; i++) {
        cin >> eggs[i].first >> eggs[i].second;
    }

    sol(0);
    cout << ans << endl;
    return 0;
}
