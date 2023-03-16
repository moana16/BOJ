//100000를 *2 조건때문에 나갈 수도 있다는 것을 명심..!
#include <bits/stdc++.h>
using namespace std;

int N,K;
queue<int> q;
int dist[100002];
int cnt;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    cin>>N>>K;
    fill(dist,dist+100001,-1);
    dist[N] = 0;
    q.push(N);

    while(dist[K] == -1) { //K값이 바뀌기만 하면 되니까~ 굳이 큐 값을 비울 필욘 없음
        int x = q.front();
        q.pop();

        for(int nxt : {x-1, x+1, 2*x}) {
            if(nxt < 0 || nxt > 100000) continue;
            if(dist[nxt] != -1 ) continue;
            dist[nxt] = dist[x] + 1;
            q.push(nxt);
        }
    }
    cout<<dist[K];
}