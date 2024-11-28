#include<bits/stdc++.h>
using namespace std;

int countRecolor(const vector<string>& board, int x, int y, const vector<string>& pattern) {
    int cnt = 0;
    for(int i=0; i<8; i++) {
        for(int j=0; j<8; j++) {
            if(board[x+i][y+j] != pattern[i][j]) cnt++;
        }
    }
    return cnt;
}

int main() {
    int N,M; cin>>N>>M;
    vector<string> board(N);
    for(int i=0; i<N; i++) cin>>board[i];

    vector<string> pattern1 = {
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW"
    };

    vector<string> pattern2 = {
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB"
    };

    int ans = 64;
    for(int i=0; i<=N-8; i++) {
        for(int j=0; j<=M-8; j++) {
            int cnt1 = countRecolor(board, i, j, pattern1);
            int cnt2 = countRecolor(board, i, j, pattern2);
            ans = min({ans, cnt1, cnt2});
        }
    }

    cout<<ans;
}