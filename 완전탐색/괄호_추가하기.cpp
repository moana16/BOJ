#include<bits/stdc++.h>
using namespace std;

int N;
string s;
int res = -0x7f7f7f;

int calculate(int a, int b, char op) {
    if(op == '+') return a+b;
    if(op == '-') return a-b;
    if(op == '*') return a*b;
    return 0;
}

void dfs(int idx, int cur) {
    if(idx >= N) {
        res = max(res, cur);
        return;
    }

    char op = idx == 0 ? '+': s[idx-1];
    if(idx + 2 < N) {
        //괄호 계산
        int nxt = calculate(s[idx] - '0', s[idx+2]-'0', s[idx+1]);
        dfs(idx + 4, calculate(cur, nxt, op));
    }
    //괄호 묶지않고 계산 그냥 이전 값에 현재 값을 계산하는 것
    dfs(idx + 2, calculate(cur, s[idx]-'0', op));
}

int main() {
    cin>>N;
    cin>>s;
    dfs(0,0);
    cout<<res;
}