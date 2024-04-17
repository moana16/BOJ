#include<bits/stdc++.h>
using namespace std;

int main() {
    int N; cin>>N;
    stack<pair<int,int>> st;
    st.push({100000001,0});
    for(int i=1; i<=N; i++) {
        int x; cin>>x;
        while(st.top().first < x) st.pop();
        cout<<st.top().second<<" ";
        st.push({x, i});       
    }
    
}