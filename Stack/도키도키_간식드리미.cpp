#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    stack<int> st;
    int cur = 1;

    for(int i=0; i<n; i++) {
        int x; cin>>x;
        if(cur == x) cur++;
        else st.push(x);
        
        while(!st.empty() && st.top() == cur) {
            st.pop();
            cur++;
    }
    }

    

    if(st.empty()) cout<<"Nice";
    else cout<<"Sad";
}