#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, N;
    cin >> H >> N;

    long long mat[31][31];  // DP 배열 초기화

    for(int i=0; i<31; i++) fill(mat[i], mat[i]+31, 0);

    if (H > N) swap(H, N); 

    mat[H][H] = 1;  
    for (int i = H; i <= N; i++) {
        for (int j = H; j <= N; j++) {
            if (i == H && j == H) continue;  // 집 위치는 이미 1로 초기화됨
            
            // 침수된 지역은 피해야 함
            if (j > i) continue;

            if (i - 1 >= 0) mat[i][j] += mat[i - 1][j];  // 위에서 오는 경우
            if (j - 1 >= 0) mat[i][j] += mat[i][j - 1];  // 왼쪽에서 오는 경우
        }
    }

    cout << mat[N][N] << endl;  // PC방까지의 경로 수 출력
}
