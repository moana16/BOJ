#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> v(N);
    for (int i = 0; i < N; i++) cin >> v[i];

    int inc_len = 1, dec_len = 1, ans = 1; 
    for (int i = 1; i < N; i++) {
        if (v[i] > v[i - 1]) {
            inc_len++;
            dec_len = 1;
        } else if (v[i] < v[i - 1]) {
            dec_len++;
            inc_len = 1;
        } else {
            inc_len++;
            dec_len++;
        }
        ans = max(ans, max(inc_len, dec_len));
    }

    cout << ans << '\n';
    return 0;
}
