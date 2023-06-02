#include <bits/stdc++.h>
using namespace std;

int n, s;
int arr[23];
int ans = 0;


void sol(int cur, int total)
{   
    if(cur == n) {
        if(total == s) ans++;
        return;
    }
    sol(cur+1,total); //지금 현재 값을 추가하지 않은 상태
    sol(cur+1, total +arr[cur]); //현재 값을 추가한 상태
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> s;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sol(0,0);
    if(s == 0) ans--; //만약 s가 0일때는 공집합도 들어가니까 하나 빼줌
    cout << ans;
}