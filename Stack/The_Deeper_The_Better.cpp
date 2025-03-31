#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;
    stack<int> st;  // 현재 중첩된 점수 저장
    int total_max = 0, tmp = 0;

    for (auto c : str) {
        if (c == '(') {
            tmp += 1;
            st.push(1);
        } else if (c == '[') {
            tmp += 3;
            st.push(3);
        } else if (c == '{') {
            tmp += 2;
            st.push(2);
        } else if (isdigit(c)) {
            total_max = max(total_max, tmp);
        } else {
            if (!st.empty()) {
                tmp -= st.top();
                st.pop();
            }
        }
    }
    cout << total_max;
}
