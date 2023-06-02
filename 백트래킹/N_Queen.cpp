#include <bits/stdc++.h>
using namespace std;
int n;
bool isUsedRow[30];
bool isUsedDiag[30];  // x+y
bool isUsedDiag2[30]; // x-y+n-1
int ans = 0;

void sol(int x) //x좌표
{
    if (x == n)
    {
        ans++;
        return;
    }
    for (int i = 0; i < n; i++) //y좌표
    {
        if (isUsedRow[i] || isUsedDiag[i + x] || isUsedDiag2[x - i + n - 1])
                continue;
            isUsedRow[i] = true;
            isUsedDiag[i + x] = true;
            isUsedDiag2[x - i + n - 1] = true;
            sol(x + 1);
            isUsedRow[i] = false;
            isUsedDiag[i + x] = false;
            isUsedDiag2[x - i + n - 1] = false;
    }
}

int main()
{
    cin >> n;
    sol(0);
    cout << ans;
}