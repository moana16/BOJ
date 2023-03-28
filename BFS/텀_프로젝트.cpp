#include <bits/stdc++.h>
using namespace std;

int mat[100001];
bool visited[100001]; //방문 처리 배열
int done[100001]; // 팀 매칭 결과 배열

const int NOT_VISITED = 0;
const int CYCLE_IN = -1;

void run(int x) {
    int cur = x;
    while(true) {
        done[cur] = x; 
        cur = mat[cur]; 
        //이번 방문에서 지나간 학생에 도달 즉, 사이클이 완성될 경우
        if(done[cur] == x) { 
            while(done[cur] != CYCLE_IN) {
                done[cur] = CYCLE_IN;
                cur = mat[cur];
            }
            return;
        }
        //이전 방문에서 지나간 학생에 도달했을 경우
        else if(done[cur] != 0) return;


    }
}

int main() {
    int T; cin>>T;
    while(T--) {
        int n; cin>>n;
        fill(done+1, done+n+1, 0); //인덱스가 1부터 시작하므로
        
        for(int i=1; i<=n; i++) {
            cin>>mat[i];
        }
        int ans = 0;
        for(int i=1; i<=n; i++) {
            if(done[i] == NOT_VISITED) run(i);
        }
        int cnt = 0;
        for(int i=1; i<=n; i++) {
            if(done[i] != CYCLE_IN) cnt++;
        }
        cout<<cnt<<'\n';





    }
}