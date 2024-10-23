#include<bits/stdc++.h>
using namespace std;

int N;
char mat[55][55];

int countFriends(int start) {
    bool visited[55] = {false};  
    int cnt = 0; 

    for (int i = 0; i < N; i++) {
        if (i == start) continue; 
        if (mat[start][i] == 'Y') {  
            if (!visited[i]) {
                visited[i] = true;
                cnt++;
            }
            for (int j = 0; j < N; j++) {
                if (j == start || j == i) continue; 
                if (mat[i][j] == 'Y' && !visited[j]) {
                    visited[j] = true;
                    cnt++;
                }
            }
        }
    }
    return cnt;
}

int main() {
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        string str;
        cin >> str;
        for (int j = 0; j < N; j++) {
            mat[i][j] = str[j];
        }
    }

    int ans = 0;
    for (int i = 0; i < N; i++) {
        ans = max(ans, countFriends(i)); 
    }

    cout << ans << '\n';
    return 0;
}
