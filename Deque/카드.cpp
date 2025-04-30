#include <bits/stdc++.h>
using namespace std;

int main() {
    int N; cin >> N;
    deque<int> dq;

    for (int i = N; i >= 1; i--) {
        dq.push_front(i);
        
        if (!dq.empty()) {
            for (int j = 1; j <= i; j++) {
                int back = dq.back();
                dq.pop_back();
                dq.push_front(back);
            }
        }
        
    }

    while (!dq.empty()) {
        cout << dq.front() << " ";
        dq.pop_front();
    }
}
