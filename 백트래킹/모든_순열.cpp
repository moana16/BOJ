#include<bits/stdc++.h>
using namespace std;

int N;
int visited[9], num[9];

void sol(int cnt) {
    if(cnt == N) {
        for(int i=0; i<N; i++) cout<<num[i]<<" ";
        cout<<'\n';
        return;
    }
    for(int i=1; i<=N; i++) {
        if(!visited[i]) {
            visited[i] = true;
            num[cnt] = i;
            sol(cnt+1);
            visited[i] = false;
        }
    }
}
int main() {
    cin>>N;

    memset(visited, false, sizeof(visited));

    sol(0);
}