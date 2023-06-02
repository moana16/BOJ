#include <bits/stdc++.h>
using namespace std;
// 1부터 N까지 자연수 중에서 중복 없이 M개를 고른 수열
// 자릿수와 숫자를 따로 생각하면서 해당 숫자가 사용되었는지 파악하면서......재귀 호출
int n, m;
int arr[10];
bool isUsed[10];

void sol(int k)
{
    if (k == m)
    {
        for (int i = 0; i < m; i++)
            cout << arr[i] << " ";
        cout << '\n';
        return;
    }
    for (int i = 1; i <= n; i++)
    {
        if (!isUsed[i])
        {
            arr[k] = i;
            isUsed[i] = true;
            sol(k + 1);
            isUsed[i] = false;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(0);
    cin >> n >> m;
    sol(0);
}