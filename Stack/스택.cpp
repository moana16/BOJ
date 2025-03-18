#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int N; cin>>N;
    cin.ignore();
    stack<int> st;
    while(N--) {
        string str;
        getline(cin,str);

        if(str.substr(0,3) == "top") {
            if(st.empty()) cout<<-1<<'\n';
            else cout<<st.top()<<'\n';
        }
        else if(str.substr(0,3) == "pop") {
            if(st.empty()) cout<<-1<<'\n';
            else {
                cout<<st.top()<<'\n';
                st.pop();
            } 
        }
        else if(str.substr(0,4) == "push") {
            st.push(stoi(str.substr(5)));
        }
        else if(str.substr(0,4) == "size") {
            cout<<st.size()<<'\n';

        }
        else if(str.substr(0,5) == "empty") {
            if(st.empty()) cout<<1<<'\n';
            else cout<<0<<'\n';

        }

    }
}