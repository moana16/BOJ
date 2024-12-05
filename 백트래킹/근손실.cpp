#include<bits/stdc++.h>
using namespace std;

int N,K,ans = 0;
vector<int> v;
bool visited[10];

void sol(int weight, int cnt) {
    if(cnt == N){
        if(weight >= 500) ans++;
        return;
    }

    for(int i=1; i<=N; i++) {
        if(visited[i] || weight + v[i] - K < 500) continue;

        visited[i] = true;
        sol(weight - K + v[i], cnt+1);
        visited[i] = false;
    }
}

int main() {
    cin>>N>>K;
    v.resize(N+1);
    for(int i=1; i<=N; i++) cin>>v[i];
    memset(visited, false, sizeof(visited));

    sol(500,0);
    cout<<ans;
}