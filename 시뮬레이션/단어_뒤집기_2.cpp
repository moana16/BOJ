#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    string str;
    
    getline(cin, str);
    stack<char> st;
    bool isTag = false;

    for(auto c : str ) {
        if(c == '<') {
            while(!st.empty()) {
                cout<<st.top();
                st.pop();
            }

            st.push(c);
            isTag = true;
        }
        else if(c == '>') {
            st.push(c);
            string tmp;

            while(!st.empty()) {
                tmp = st.top() + tmp;
                st.pop();
            }
            cout<<tmp;
            isTag = false;
        }else {
            if(c == ' ' && !isTag) {
                while(!st.empty()) {
                cout<<st.top();
                st.pop();
                }
                cout<<" ";
            }
            else st.push(c);
        }
    

    }

    while(!st.empty()) {
        cout<<st.top();
        st.pop();
    }


}