#include <bits/stdc++.h>
using namespace std;

int dr[2] = {1, -1};  // 좌우 이동 방향

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N, K;
    cin >> N >> K;

    queue<int> q;
    unordered_map<int, int> visited;

    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        visited[x] = 0;  
        q.push(x);
    }

    long long ans = 0; 
    int cnt = 0;        

    while (!q.empty() && cnt < K) {
        int x = q.front();
        q.pop();

        for (int r = 0; r < 2; r++) {
            int nx = x + dr[r];

            if (visited.find(nx) == visited.end()) {
                visited[nx] = visited[x] + 1;  
                ans += visited[nx];            
                cnt++;                       
                if (cnt == K) {
                    cout << ans;  
                    return 0;
                }
                q.push(nx);
            }
        }
    }

    cout << ans << '\n';
    return 0;
}
