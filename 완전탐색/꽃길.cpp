#include<bits/stdc++.h>
using namespace std;

int N;
int mat[202][202];
bool visited[202][202];
int ans = 0x7f7f7f;

int d[4][2] = {{1,0},{0,1},{-1,0},{0,-1}};


int addAllCost(int x, int y) {
	int sum = mat[x][y];
    for (int i = 0; i < 4; i++) {
        if (visited[x+d[i][0]][y+d[i][1]]) return -1;
	}
	for (int i = 0; i < 4; i++) {
		visited[x+d[i][0]][y+d[i][1]] = true;
		sum += mat[x+d[i][0]][y+d[i][1]];
	}
	return sum;
}

void initVisited(int x, int y) {
    visited[x][y] = false;

    for(int i=0; i<4; i++) {
        visited[x+d[i][0]][y+d[i][1]] = false;
    }

}

void sol(int x, int y, int n, int costSum) {
    if(n == 3) {
        ans = min(ans, costSum);
        return;
    }

    for(int i=1; i<N-1; i++) {
        for(int j=1; j<N-1; j++) {
            if(visited[i][j]) continue;
            int sum = addAllCost(i,j);
            if(sum != -1) {
                sol(i,j,n+1,costSum+sum);
                initVisited(i,j);
            }
        }
    }
}


int main() {
    cin>>N;
    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            cin>>mat[i][j];
        }
    }

    memset(visited, false, sizeof(visited));

    for(int i=1; i<N-1; i++) {
        for(int j=1; j<N-1; j++) {
            int sum = addAllCost(i,j);
            sol(i,j,1,sum);
            initVisited(i,j);

        }
    }
    cout<<ans;
}