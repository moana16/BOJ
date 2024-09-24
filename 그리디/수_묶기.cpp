#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, ans = 0; 
    cin >> N;
    
    priority_queue<int> pos;  
    priority_queue<int, vector<int>, greater<int>> neg; 
    int ones = 0; 
    int zeros = 0; 
    
    for (int i = 0; i < N; i++) {
        int x; cin >> x;
        if (x > 1) pos.push(x);  
        else if (x == 1) ones++;  
        else if (x == 0) zeros++; 
        else neg.push(x);  
    }

    // 양수 처리
    while (pos.size() > 1) {
        int x = pos.top(); pos.pop();
        int y = pos.top(); pos.pop();
        ans += x * y;
    }
    if (!pos.empty()) ans += pos.top(); 

    // 음수 처리
    while (neg.size() > 1) {
        int x = neg.top(); neg.pop();
        int y = neg.top(); neg.pop();
        ans += x * y;
    }
    if (!neg.empty()) {
        if (zeros == 0) {
            ans += neg.top();
        }
    }

    ans += ones;

    cout << ans << endl;

    return 0;
}
