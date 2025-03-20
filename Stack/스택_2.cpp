#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int N; cin>>N;
    stack<int> st;
    while(N--) {
        int com; cin>>com;
        switch (com) {
        case 1:
            int x; cin>>x;
            st.push(x);
            break;
        case 2:
            if(st.empty()) cout<<-1<<'\n';
            else {
                cout<<st.top()<<'\n';
                st.pop();
            }
            break;
        case 3:
            cout<<st.size()<<'\n';
            break;
        case 4:
            if(st.empty()) cout<<1<<'\n';
            else cout<<0<<'\n';
            break;
        case 5:
            if(st.empty()) cout<<-1<<'\n';
            else cout<<st.top()<<'\n';
            break;
        
        }
    }
}