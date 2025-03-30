#include <bits/stdc++.h>
using namespace std;

int main() {
    map<char, string> mp = {{'H', "1"}, {'C', "12"}, {'O', "16"}};

    string str;
    cin >> str;
    stack<string> st;

    for (char c : str) {
        if (c == '(') {
            st.push("(");
        } else if (isalpha(c)) {
            st.push(mp[c]);
        } else if (isdigit(c)) {  // 숫자 처리
            int num = c - '0';
            int top = stoi(st.top());
            st.pop();
            st.push(to_string(top * num));
        } else if (c == ')') {
            int sum = 0;
            while (!st.empty() && st.top() != "(") {
                sum += stoi(st.top());
                st.pop();
            }
            st.pop();
            st.push(to_string(sum));
        }
    }

    int ans = 0;
    while (!st.empty()) {
        ans += stoi(st.top());
        st.pop();
    }

    cout << ans;
    return 0;
}
