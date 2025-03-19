#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int N; cin>>N;
    cin.ignore();
    for(int i=1; i<=N; i++) {
        string str, tmp;
        getline(cin,str);
        stack<string> st;
        stringstream ss(str);
        while(ss>>tmp) {
            st.push(tmp);
        }

        cout<<"Case #"<<i<<": ";
        while(!st.empty()) {
            cout<<st.top();
            st.pop();
            if(!st.empty()) cout<<" ";
        }
        cout<<'\n';
    }
}