#include <bits/stdc++.h>
using namespace std;

struct Meeting {
    int start, end, people;
};

bool compare(Meeting a, Meeting b) {
    return a.end < b.end; 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N;
    cin >> N;

    vector<Meeting> meetings(N);
    for (int i = 0; i < N; i++) {
        cin >> meetings[i].start >> meetings[i].end >> meetings[i].people;
    }

    sort(meetings.begin(), meetings.end(), compare);

    vector<long long> dp(N + 1, 0); 

    for (int i = 1; i <= N; i++) {
        // 현재 회의를 포함하지 않는 경우 (이전 최대값 유지)
        dp[i] = dp[i - 1];

        // 현재 회의를 포함하는 경우 (이전 회의 중 겹치지 않는 회의를 찾아 추가)
        int lastCompatible = 0; // 겹치지 않는 마지막 회의의 dp 값
        for (int j = i - 1; j > 0; j--) {
            if (meetings[j - 1].end <= meetings[i - 1].start) {
                lastCompatible = dp[j];
                break;
            }
        }

        dp[i] = max(dp[i], lastCompatible + static_cast<long long>(meetings[i - 1].people));

    }

    cout << dp[N] << '\n';
}
