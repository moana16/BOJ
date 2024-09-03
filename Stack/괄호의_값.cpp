#include<bits/stdc++.h>
using namespace std;

string str;
stack<int> st;

int main() {
    cin >> str;
    for (auto c : str) {
        if (c == '(') {
            st.push(-2); 
        } else if (c == '[') {
            st.push(-3); 
        } else if (c == ')') {
            int n = 0;
            while (!st.empty() && st.top() != -2) {
                if (st.top() < 0) { 
                    cout << 0 << endl;
                    return 0;
                }
                n += st.top();
                st.pop();
            }
            if (st.empty() || st.top() != -2) {
                cout << 0 << endl;
                return 0;
            }
            st.pop();  
            st.push(n == 0 ? 2 : 2 * n);  
        } else if (c == ']') {
            int n = 0;
            while (!st.empty() && st.top() != -3) {
                if (st.top() < 0) { 
                    cout << 0 << endl;
                    return 0;
                }
                n += st.top();
                st.pop();
            }
            if (st.empty() || st.top() != -3) {
                cout << 0 << endl;
                return 0;
            }
            st.pop();  
            st.push(n == 0 ? 3 : 3 * n);  
        }
    }

    int ans = 0;
    while (!st.empty()) {
        if (st.top() < 0) {
            cout << 0 << endl;
            return 0;
        }
        ans += st.top();
        st.pop();
    }

    cout << ans << endl;
    return 0;
}
