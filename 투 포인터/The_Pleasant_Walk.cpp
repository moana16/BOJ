#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> horses(n);
    for (int i = 0; i < n; i++) cin >> horses[i];

    int left = 0, ans = 0;
    for (int right = 1; right < n; right++) {
        if ( horses[right] == horses[right - 1]) {
            ans = max(ans, right - left);
            left = right;
        }        
    }

    ans = max(ans, n - left);
    cout << ans << endl;
    return 0;
}
