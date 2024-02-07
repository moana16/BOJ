#include<bits/stdc++.h>
using namespace std;


int N;
int scv[3];
int dp[61][61][61];
int MN = 0x7f7f7f;

//dp[a][b][c]는 a,b,c 체력을 모두 파괴하기 위한 최소 공격 횟수

int solve(int a, int b, int c) {
    if(a < 0) return solve(0,b,c);
    if(b < 0) return solve(a,0,c);
    if(c < 0) return solve(a,b,0);

    if(a == 0 && b == 0 && c == 0) return 0;

    if(dp[a][b][c] != -1) return dp[a][b][c];

    int res = MN;

    //모든 공격 순서에 대해 최소값 계산
    res = min(res, solve(a-9, b-3, c-1) + 1);
    res = min(res, solve(a-9, b-1, c-3) + 1);
    res = min(res, solve(a-3, b-9, c-1) + 1);
    res = min(res, solve(a-3, b-1, c-9) + 1);
    res = min(res, solve(a-1, b-3, c-9) + 1);
    res = min(res, solve(a-1, b-9, c-3) + 1);

    dp[a][b][c] = res;
    return res;


}

int main() {
    cin>>N;
    for(int i=0; i<N; i++) cin>>scv[i];

    memset(dp, -1, sizeof(dp));

    cout<<solve(scv[0], scv[1], scv[2]);


}