#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
//상하좌우가 연결되어있어야함
// 5<=N<=25
constexpr int MAX=27;
int N; //지도의 크기 저장할 배열
int mat[MAX][MAX];
bool visited[MAX][MAX];
int dy[]={0,0,1,-1};
int dx[]={1,-1,0,0};
int num=1; //단지 번호
vector<int> v; //단지에 속하는 집의 개수 저장할 벡터
int house=0; //단지에 속하는 집의 개수

 
void DFS(int y, int x) {
    visited[y][x] = true;
    mat[y][x] = num;
    house++;
 
    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        
        if (nx < 0 || ny < 0 || nx >= N || ny >= N)
            continue;
 
        if (mat[ny][nx] == 1 && visited[ny][nx] == 0) {
            DFS(ny, nx);
        }
    }
}
 
int main() {
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        string input;
        cin >> input;
 
        for (int j = 0; j < N; j++) {
            mat[i][j] = input.at(j) - '0';
        }
    }
 
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (mat[i][j] == 1 && visited[i][j] == 0) {
                DFS(i, j);
                num++;
                v.push_back(house);
                house = 0;
            }
        }
    }
 
    sort(v.begin(), v.end());
 
    cout << num-1 << endl;
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    }
 
}
