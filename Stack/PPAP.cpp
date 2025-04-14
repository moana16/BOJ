#include <bits/stdc++.h>
using namespace std;

int main() {
    string str; cin >> str;
    stack<char> st;

    for (char c : str) {
        st.push(c);

        if (st.size() >= 4) {
            char a = st.top(); st.pop(); // P
            char b = st.top(); st.pop(); // A
            char c = st.top(); st.pop(); // P
            char d = st.top(); st.pop(); // P

            if (d == 'P' && c == 'P' && b == 'A' && a == 'P') {
                st.push('P');
            } else {
                st.push(d);
                st.push(c);
                st.push(b);
                st.push(a);
            }
        }
    }

    if (st.size() == 1 && st.top() == 'P') cout << "PPAP";
    else cout << "NP";
}
