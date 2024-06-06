#include <bits/stdc++.h>
using namespace std;

int N, ans = INT_MAX;
int cost[12][12];

void sol(int total, int cnt, int start, int current, int visited[]) {
    if(cnt == N && cost[current][start] != 0) {
        ans = min(ans, total + cost[current][start]);
        return;
    }

    for(int i = 1; i <= N; i++) {
        if(cost[current][i] != 0 && visited[i] == false) {
            visited[i] = true;
            sol(total + cost[current][i], cnt + 1, start, i, visited);
            visited[i] = false;
        }
    }
}

int main() {
    cin >> N;
    for(int i = 1; i <= N; i++) {
        for(int j = 1; j <= N; j++) {
            cin >> cost[i][j];
        }
    }

    for (int start = 1; start <= N; start++) {
        int visited[12];
        memset(visited, false, sizeof(visited));
        visited[start] = true;
        sol(0, 1, start, start, visited);
    }

    cout << ans;

    return 0;
}
