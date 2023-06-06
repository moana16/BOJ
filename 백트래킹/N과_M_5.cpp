#include <bits/stdc++.h>
using namespace std;
int n, m;
int arr[10];
vector<pair<int, bool>> v;

void sol(int k)
{
    if (k == m)
    {
        for (int i = 0; i < m; i++)
            cout << arr[i] << ' ';
        cout << '\n';
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (!v[i].second)
        {
            arr[k] = v[i].first;
            v[i].second = true;
            sol(k + 1);
            v[i].second = false;
        }
    }
}
int main()
{

    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back({x, false});
    }
    sort(v.begin(), v.end());
    sol(0);
}