#include<bits/stdc++.h>
using namespace std;

int main() {
    int N; cin>>N;
    vector<int> v(N);
    for(int i=0; i<N; i++) cin>>v[i];

    stack<int> st;
    for(int i=N-1; i>=0; i--) {
        if(st.empty()) st.push(v[i]);
        else {
            if(st.top() < v[i]) {
                st.push(v[i]);
            }
        }
    }

    cout<<st.size();
}