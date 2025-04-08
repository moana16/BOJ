#include <bits/stdc++.h>
using namespace std;
constexpr int INF = 1e9;

int main() {
    int N; cin >> N;
    vector<int> st(4, 0);

    for(int i = 0; i < N; i++) {
        int x; cin >> x;
        int tmp = -1, idx = -1;

        for(int j = 0; j < 4; j++) {
            if(st[j] == 0 || st[j] <= x) {
                if(st[j] > tmp) {
                    tmp = st[j];
                    idx = j;
                }
            }
        }

        if(idx == -1) {
            cout << "NO";
            return 0;
        } else {
            st[idx] = x;
        }
    }
    cout << "YES";
}
