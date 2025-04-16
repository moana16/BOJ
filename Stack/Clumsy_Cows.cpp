#include<bits/stdc++.h>
using namespace std;

int main() {
    string str; cin>>str;
    stack<char> st;
    for(auto c : str) {
        if(c == '(') st.push(c);
        else {
            if(!st.empty() && st.top() == '(') st.pop();
            else st.push(c);
        }
    }

    int toggle_count = 0;

    while(!st.empty()) {
        char first = st.top(); st.pop();
        char second = st.top(); st.pop();

        if(first == second) toggle_count += 1;
        else toggle_count += 2;
    }

    cout<<toggle_count;
}

