#include<bits/stdc++.h>
using namespace std;
int N, mn = INT_MAX, mx = INT_MIN;
int num[13];
int oper[4];

void sol(int cur, int idx) {

    if(idx == N) {
        mn = min(mn, cur);
        mx = max(mx, cur);
        return;
    }

    for(int i=0; i<4; i++) {
        if(oper[i] > 0) {
            oper[i]--;
            if(i == 0) sol(cur + num[idx], idx+1);
            else if(i == 1) sol(cur - num[idx], idx+1);
            else if(i == 2) sol(cur * num[idx], idx+1);
            else sol(cur / num[idx], idx+1);
            oper[i]++;
        }
    }


}

int main() {
    cin>>N;
    for(int i=0; i<N; i++) cin>>num[i];
    for(int i=0; i<4; i++) cin>>oper[i];

    sol(num[0], 1);
    cout<<mx<<'\n'<<mn;

}