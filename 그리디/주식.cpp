#include <bits/stdc++.h>
using namespace std;

constexpr int MAX = 1e6 + 3;
int v[MAX];
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> v[i];
        long long ans = 0;
        int max_val = v[n - 1];
        for (int i = n - 2; i >= 0; i--)
        {
            if (v[i] > max_val)
                max_val = v[i];
            ans += max_val - v[i];
        }
        cout << ans << '\n';
    }
}