#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N;
    vector<int> k(N);
    for (int i = 0; i < N; i++) cin >> k[i];
    sort(k.rbegin(), k.rend()); 
    
    cin >> M;
    vector<int> b(M);
    for (int i = 0; i < M; i++) cin >> b[i];
    sort(b.rbegin(), b.rend());  

    if (b[0] > k[0]) {
        cout << -1 << '\n';
        return 0;
    }

    int cnt = 0;
    while (!b.empty()) {
        int idx = 0;
        for (int i = 0; i < N && !b.empty(); i++) {
            while (idx < b.size() && b[idx] > k[i]) {
                idx++;
            }
            if (idx < b.size()) {
                b.erase(b.begin() + idx);
            }
        }
        cnt++;
    }

    cout << cnt << '\n';
    return 0;
}
