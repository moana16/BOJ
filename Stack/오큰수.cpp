#include<bits/stdc++.h>
using namespace std;

int main() {
    int N; cin>>N;
    vector<int> v(N);
    for(int i=0; i<N; i++) cin>>v[i];

    stack<int> st;
    vector<int> ans;

    for(int i=N-1; i>=0; i--) {
        if(st.empty()) {
            ans.push_back(-1);
        }
        else {
            while(!st.empty() && st.top() <= v[i]){
                st.pop();
            }

            if(!st.empty()) ans.push_back(st.top());
            else ans.push_back(-1);
        }
        st.push(v[i]);
    }

    reverse(ans.begin(), ans.end());
    for(auto a : ans) cout<<a<<" ";
}