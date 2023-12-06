#include <bits/stdc++.h>
using namespace std;

int F,S,G,U,D;
int dist[1000002];

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin>>F>>S>>G>>U>>D;
  fill(dist+1, dist+F+1, -1);
  
  queue<int> q;
  dist[S] = 0; // 현재 위치의 거리를 0으로 둠
  q.push(S); // s층에서 시작
  while(!q.empty()){
    int cur = q.front(); q.pop();
    for(auto nxt : {cur + U, cur - D}){
      if(nxt > F || nxt <= 0 || dist[nxt] != -1) continue;
      dist[nxt] = dist[cur] + 1;
      q.push(nxt);
    }
  }

  if(dist[G] == -1) cout << "use the stairs";
  else cout << dist[G];
}